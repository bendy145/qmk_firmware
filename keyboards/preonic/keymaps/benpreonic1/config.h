#pragma once
#define MEDIA_KEY_DELAY 10
#ifdef AUDIO_ENABLE
    #define TRIUMPH H__NOTE(_G6), H__NOTE(_F6), H__NOTE(_E6), W__NOTE(_E6), H__NOTE(_F6)
    #define STARTUP_SONG SONG(TRIUMPH)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2


#define ENCODERS_PAD_A { B12 }
#define ENCODERS_PAD_B { B13 }
