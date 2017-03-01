/**
 * @section License
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2014-2016, Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * This file is part of the Simba project.
 */

#ifndef __SONG_H__
#define __SONG_H__

static const FAR struct operation_t song[] = {
    /* Staffan var en stalledrang. */

    { PACE, 200 },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_D3 + 1, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_D3 + 1, 0 } },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_D3 + 1, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_D3 + 1, 0 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_D3 + 1, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_D3 + 1, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3 + 1, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3 + 1, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3 + 1, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3 + 1, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_A3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_A3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_A3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_A3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3 + 1, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3 + 1, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3 + 1, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3 + 1, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_D3 + 1, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_D3 + 1, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_D3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_D3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_A3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_A3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_A3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_A3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3 + 1, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3 + 1, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3 + 1, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3 + 1, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3 + 1, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3 + 1, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },

    { DELAY, 8 },

    /* Hej, tomtegubbar. */

    { PACE, 100 },

    /* 1. */
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_A3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_A3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_D4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_D4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { DELAY, 4 },

    /* 2. */
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_A3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_A3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_D4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_D4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },

    /* 3. */
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E4, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_D4, 0x45 } },
    { DELAY, 6 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_D4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E4, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_D4, 0x45 } },
    { DELAY, 6 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_D4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 2 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E4, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_D4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_D4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_D4, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_D4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_A3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_A3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { DELAY, 4 },

    /* 4. */
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_A3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_A3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_E3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_E3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_F3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_F3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_G3, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_G3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_D4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_D4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 3 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_B3, 0x45 } },
    { DELAY, 1 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_B3, 0 } },
    { SPACING },

    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { SPACING },
    { COMMAND, 3, { MIDI_NOTE_ON, MIDI_NOTE_C4, 0x45 } },
    { DELAY, 4 },
    { COMMAND, 3, { MIDI_NOTE_OFF, MIDI_NOTE_C4, 0 } },
    { DELAY, 4 },

    { DELAY, 8 }
};

#endif
