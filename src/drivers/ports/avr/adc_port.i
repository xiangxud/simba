/**
 * @file drivers/linux/adc_port.i
 * @version 1.0
 *
 * @section License
 * Copyright (C) 2014-2015, Erik Moqvist
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * This file is part of the Simba project.
 */

#include <avr/interrupt.h>

/* Free running mode sampling rate.
   FCPU / clockdiv / samplingtime = 16MHz / 64 / 13 = 9615Hz. */
#define SAMPLING_RATE_HZ (2 * 9615)

/* Convert desired smpling rate to number of interrupts, rounded
   up. The error in the calculation is rather big for high sampling
   frequencies.*/
#define SAMPLING_RATE_TO_INTERRUPT_MAX(rate) \
    ((SAMPLING_RATE_HZ + rate - 1) / rate)

struct spin_lock_t lock;

ISR(ADC_vect)
{
    struct adc_device_t *dev_p = &adc_device[0];
    struct adc_driver_t *drv_p = dev_p->jobs.head_p;

    /* The AD Converter is running in free mode. */
    drv_p->interrupt_count++;

    if (drv_p->interrupt_count < drv_p->interrupt_max) {
        return;
    }

    drv_p->interrupt_count = 0;

    /* Read the sample from the output register. */
    drv_p->samples[drv_p->pos++] = ADC;

    /* Resume thread when all samples have been collected. */
    if (drv_p->pos == drv_p->length) {
        /* Detach job from job list as it is completed. */
        dev_p->jobs.head_p = drv_p->next_p;

        /* Disable ADC hardware if there are no more queued jobs. */
        if (drv_p->next_p != NULL) {
            ADMUX = drv_p->next_p->admux;
        } else {
            ADCSRA &= ~_BV(ADEN);
        }

        /* Resume the thread if it is waiting for completion. */
        if (drv_p->thrd_p != NULL) {
            thrd_resume_irq(drv_p->thrd_p, 0);
        }
    }
}

static void start_adc_hw(struct adc_driver_t *drv_p)
{
    /* Start AD Converter in free running mode. */
    ADMUX = drv_p->admux;
    ADCSRB = 0;
    /* clock div 128. */
    ADCSRA = (_BV(ADEN) | _BV(ADSC) | _BV(ADATE) | _BV(ADIE)
              | _BV(ADPS2) | _BV(ADPS1) /*| _BV(ADPS0)*/); /* Uncomment for 9615 Hz. */
}

static int adc_port_module_init()
{
    spin_init(&lock);

    return (0);
}

static int adc_port_init(struct adc_driver_t *drv_p,
                         struct adc_device_t *dev_p,
                         struct pin_device_t *pin_dev_p,
                         int reference,
                         int sampling_rate)
{
    int channel = 0;

    while ((&pin_a0_dev + channel) != pin_dev_p) {
        channel++;
    }

    drv_p->dev_p = dev_p;
    drv_p->interrupt_max = SAMPLING_RATE_TO_INTERRUPT_MAX(sampling_rate);
    drv_p->admux = (reference | (channel & 0x07));
    pin_init(&drv_p->pin_drv, pin_dev_p, PIN_INPUT);

    return (0);
}

static int adc_port_async_convert(struct adc_driver_t *drv_p,
                                  int *samples,
                                  size_t length)
{
    spin_irq_t irq;

    /* Initialize. */
    drv_p->pos = 0;
    drv_p->samples = samples;
    drv_p->length = length;
    drv_p->interrupt_count = 0;
    drv_p->thrd_p = NULL;
    drv_p->next_p = NULL;

    /* Enqueue. */
    spin_lock(&lock, &irq);

    if (drv_p->dev_p->jobs.head_p == NULL) {
        /* Empty queue. */
        drv_p->dev_p->jobs.head_p = drv_p;
        start_adc_hw(drv_p);
    } else {
        /* Non-empty queue. */
        drv_p->dev_p->jobs.tail_p->next_p = drv_p;
    }

    drv_p->dev_p->jobs.tail_p = drv_p;

    spin_unlock(&lock, &irq);

    return (0);
}

static int adc_port_async_wait(struct adc_driver_t *drv_p)
{
    int has_finished;
    spin_irq_t irq;

    spin_lock(&lock, &irq);

    has_finished = (drv_p->pos == drv_p->length);

    /* Always set thrd_p, even if the convertion has finished. If the
       convertion has finished, thrd_p will be unused.*/
    drv_p->thrd_p = thrd_self();

    spin_unlock(&lock, &irq);

    /* Wait until all samples have been converted. */
    if (!has_finished) {
        thrd_suspend(NULL);
    }

    return (has_finished);
}

static int adc_port_convert(struct adc_driver_t *drv_p,
                            int *samples,
                            size_t length)
{
    adc_port_async_convert(drv_p, samples, length);
    adc_port_async_wait(drv_p);

    return (0);
}
