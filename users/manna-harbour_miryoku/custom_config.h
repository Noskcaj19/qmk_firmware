// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

//#undef TAPPING_FORCE_HOLD
//#define TAPPING_FORCE_HOLD_PER_KEY
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define TAPPING_TOGGLE 2
#define COMBO_COUNT 2

#define EE_HANDS

#define MIRYOKU_LAYERMAPPING_GAME_NUM LAYOUT_split_3x6_3
#define MIRYOKU_LAYER_GAME_NUM \
    KC_NO,        KC_6,    KC_7,    KC_8,    KC_9,      KC_0,                   U_NA,   U_NA,    U_NA,    U_NA,    RESET,   KC_NO, \
    MO(U_GAME_NUM), KC_1,    KC_2,    KC_3,    KC_4,      KC_5,                   U_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, \
    KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_GRAVE,  KC_NO,                  U_NA,   U_NA,    U_NA,    KC_ALGR, U_NA,    KC_NO, \
                                          KC_DOT,  KC_0,   KC_MINS,     KC_NO,  KC_NO ,  KC_NO

#define MIRYOKU_LAYERMAPPING_GAME LAYOUT_split_3x6_3
#define MIRYOKU_LAYER_GAME \
     KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRAVE, \
     MO(U_GAME_NUM), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TD(TD_GAME),  \
                                          KC_LCTL, KC_SPC, KC_LALT,      KC_ENT, KC_BSPC, KC_LGUI

#define MIRYOKU_LAYERMAPPING_BASE LAYOUT_split_3x6_3
#define MIRYOKU_LAYER_BASE \
     XXXXXXX,     KC_Y,             KC_C,          KC_L,         KC_M,         KC_K,  /*|*/   KC_Z, KC_F,         KC_U,         KC_COMM,        KC_QUOT,          XXXXXXX, \
     XXXXXXX,     LGUI_T(KC_I),     LALT_T(KC_S),  LCTL_T(KC_R), LSFT_T(KC_T), KC_G,  /*|*/   KC_P, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_A),   LGUI_T(KC_O),     XXXXXXX,  \
     TD(TD_GAME), LT(U_BUTTON, KC_Q), ALGR_T(KC_V), KC_W,        KC_D,         KC_J,  /*|*/   KC_B, KC_H,         KC_SLSH,      ALGR_T(KC_DOT), LT(U_BUTTON, KC_X), TD(TD_GAME),  \
                        LT(U_MEDIA, KC_ESC), LT(U_NAV, KC_SPC), LT(U_MOUSE, KC_TAB),             LT(U_SYM, KC_ENT), LT(U_NUM, KC_BSPC), LT(U_FUN, KC_DEL)

#define MIRYOKU_LAYERMAPPING_TAP LAYOUT_split_3x6_3
#define MIRYOKU_LAYER_TAP \
DF(U_BASE),        KC_Y,              KC_C,              KC_L,              KC_M,              KC_K,              KC_Z,              KC_F,              KC_U,              KC_COMM,           KC_QUOT,       XXXXXXX, \
XXXXXXX,           KC_I,              KC_S,              KC_R,              KC_T,              KC_G,              KC_P,              KC_N,              KC_E,              KC_A,              KC_O,          XXXXXXX, \
XXXXXXX,           KC_Q,              KC_V,              KC_W,              KC_D,              KC_J,              KC_B,              KC_H,              KC_SLSH,           KC_DOT,            KC_X,          XXXXXXX, \
                                                         KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL
