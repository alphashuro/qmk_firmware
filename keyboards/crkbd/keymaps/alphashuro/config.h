/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLED_NUM 27
    /* #define RGBLIGHT_LIMIT_VAL 120 */
    /* #define RGBLIGHT_HUE_STEP 185 */
    /* #define RGBLIGHT_SAT_STEP 100 */
    /* #define RGBLIGHT_VAL_STEP 50 */
    #define RGBLIGHT_DEFAULT_HUE 100
    #define RGBLIGHT_DEFAULT_SAT 100
    #define RGBLIGHT_DEFAULT_VAL 100
    #define RGBLIGHT_DEFAULT_SPD 100
    #define RGBLIGHT_EFFECT_BREATHING
    /* #define RGBLIGHT_MODE_BREATHING 2 */
    #define RGBLIGHT_SPLIT
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_BREATHING + 1
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64
