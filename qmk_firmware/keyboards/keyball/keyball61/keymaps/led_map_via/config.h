/*
This is the c configuration file for the keymap

Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

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

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING
//#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#    define RGBLIGHT_EFFECT_SNAKE
//#    define RGBLIGHT_EFFECT_KNIGHT
//#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#    define RGBLIGHT_EFFECT_RGB_TEST
//#    define RGBLIGHT_EFFECT_ALTERNATING
//#    define RGBLIGHT_EFFECT_TWINKLE
#   define RGBLIGHT_LAYERS
#   define RGBLIGHT_DEFAULT_SAT 64
#   define RGBLIGHT_DEFAULT_HUE 169
#endif

#define LED_LAYOUT( \
    L00, L01, L02, L03, L04, L05,              R05, R04, R03, R02, R01, R00, \
    L10, L11, L12, L13, L14, L15,              R15, R14, R13, R12, R11, R10, \
    L20, L21, L22, L23, L24, L25,              R25, R24, R23, R22, R21, R20, \
    L30, L31, L32, L33, L34, L35, L36,    R36, R35, R34, R33, R32, R31, R30, \
    L40, L41, L42, L43,                                            R41, R40, \
    BL00, BL01,                                                  BR00, BR01, \
    BL02,                                                              BR02, \
    BL03, BL04,      BL05, BL06, BL07,    BR03, BR04, BR05,            BR06  \
    ) \
    { \
    L36, L05, L15, L25, L35, \
    L04, L14, L24, L34, L03, \
    L13, L23, L33, L43, L02, \
    L12, L22, L32, L42, L01, \
    L11, L21, L31, L41, L00, \
    L10, L20, L30, L40, \
    BL01, BL00, BL02, BL03, BL04, BL05, BL06, BL07, \
    BR03, BR04, BR05, BR06, BR02, BR01, BR00, \
    R00, R10, R20, \
    R30, R40, R01, R11, R21, \
    R31, R41, R02, R12, R22, \
    R32, R03, R13, R23, R33, \
    R04, R14, R24, R34, R05, \
    R15, R25, R35, R36 \
    }


#define RGBLIGHT_LED_MAP LED_LAYOUT(\
     0,  1,  2,  3,  4,  5,          37, 38, 39, 40, 41, 42, \
     6,  7,  8,  9, 10, 11,          43, 44, 45, 46, 47, 48, \
    12, 13, 14, 15, 16, 17,          49, 50, 51, 52, 53, 54, \
    18, 19, 20, 21, 22, 23, 24,  55, 56, 57, 58, 59, 60, 61, \
    25, 26, 27, 28,                                  62, 63, \
    29, 30,                                          64, 65, \
    31,                                                  66, \
    32, 33, 34,         35, 36,  67, 68, 69,             70  \
)
