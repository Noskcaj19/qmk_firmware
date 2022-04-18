// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#include QMK_KEYBOARD_H

#include "manna-harbour_miryoku.h"

enum layers { MIRYOKU_LAYER_NAMES, GAME };


#define MIRYOKU_LAYER_GAME \
     KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRAVE, \
     MO(NUM), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TG(GAME),  \
                                         KC_LCTL, KC_LALT, KC_SPC,     KC_ENT, KC_BSPC, KC_LGUI

#define MIRYOKU_LAYER_BASE_WIDE \
     XXXXXXX, KC_Y,             KC_C,          KC_L,         KC_M,         KC_K,  /*|*/   KC_Z, KC_F,         KC_U,         KC_COMM,        KC_QUOT,          XXXXXXX, \
     XXXXXXX, LGUI_T(KC_I),     LALT_T(KC_S),  LCTL_T(KC_R), LSFT_T(KC_T), KC_G,  /*|*/   KC_P, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_A),   LGUI_T(KC_O),     XXXXXXX,  \
     XXXXXXX, LT(BUTTON, KC_Q), ALGR_T(KC_V),  KC_W,         KC_D,         KC_J,  /*|*/   KC_B, KC_H,         KC_SLSH,      ALGR_T(KC_DOT), LT(BUTTON, KC_X), TG(GAME),  \
                        LT(MEDIA, KC_ESC),   LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB),      LT(SYM, KC_ENT),   LT(NUM, KC_BSPC),   LT(FUN, KC_DEL)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE]   = U_MACRO_VA_ARGS(LAYOUT_split_3x6_3, MIRYOKU_LAYER_BASE_WIDE),
  [NAV]    = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_NAV),
  [MOUSE]  = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_MOUSE),
  [MEDIA]  = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_MEDIA),
  [NUM]    = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_NUM),
  [SYM]    = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_SYM),
  [FUN]    = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_FUN),
  [BUTTON] = U_MACRO_VA_ARGS(LAYOUT_miryoku, MIRYOKU_LAYER_BUTTON),
  [GAME]   = U_MACRO_VA_ARGS(LAYOUT_split_3x6_3, MIRYOKU_LAYER_GAME)
};


const uint16_t PROGMEM game_tab[] = {KC_ESC, MO(NUM), COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(game_tab, KC_TAB),
};

#if defined (MIRYOKU_KLUDGE_THUMBCOMBOS)
const uint16_t PROGMEM thumbcombos_base_right[] = {LT(SYM, KC_ENT), LT(NUM, KC_BSPC), COMBO_END};
const uint16_t PROGMEM thumbcombos_base_left[] = {LT(NAV, KC_SPC), LT(MOUSE, KC_TAB), COMBO_END};
const uint16_t PROGMEM thumbcombos_nav[] = {KC_ENT, KC_BSPC, COMBO_END};
const uint16_t PROGMEM thumbcombos_mouse[] = {KC_BTN1, KC_BTN3, COMBO_END};
const uint16_t PROGMEM thumbcombos_media[] = {KC_MSTP, KC_MPLY, COMBO_END};
const uint16_t PROGMEM thumbcombos_num[] = {KC_0, KC_MINS, COMBO_END};
  #if defined (MIRYOKU_LAYERS_FLIP)
const uint16_t PROGMEM thumbcombos_sym[] = {KC_UNDS, KC_LPRN, COMBO_END};
  #else
const uint16_t PROGMEM thumbcombos_sym[] = {KC_RPRN, KC_UNDS, COMBO_END};
  #endif
const uint16_t PROGMEM thumbcombos_fun[] = {KC_SPC, KC_TAB, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  COMBO(thumbcombos_base_right, LT(FUN, KC_DEL)),
  COMBO(thumbcombos_base_left, LT(MEDIA, KC_ESC)),
  COMBO(thumbcombos_nav, KC_DEL),
  COMBO(thumbcombos_mouse, KC_BTN2),
  COMBO(thumbcombos_media, KC_MUTE),
  COMBO(thumbcombos_num, KC_DOT),
  #if defined (MIRYOKU_LAYERS_FLIP)
  COMBO(thumbcombos_sym, KC_RPRN),
  #else
  COMBO(thumbcombos_sym, KC_LPRN),
  #endif
  COMBO(thumbcombos_fun, KC_APP)
};
#endif
