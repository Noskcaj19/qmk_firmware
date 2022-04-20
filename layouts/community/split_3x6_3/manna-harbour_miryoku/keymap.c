// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.
#include QMK_KEYBOARD_H

#include "manna-harbour_miryoku.h"

enum layers { MIRYOKU_LAYER_NAMES, GAME, GAME_NUM };

//bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    // if ((keycode & 0xFF) == KC_BSPC) {
    //     return false;
    // }

//    return true;
//}

void rgb_matrix_indicators_kb(void) {
    if (layer_state_is(GAME)) {
        rgb_matrix_set_color_all(0, 0, 5);
    } else {
        rgb_matrix_set_color_all(0, 0, 0);
    }

    if (host_keyboard_led_state().caps_lock) {
        if (layer_state_is(GAME)) {
            rgb_matrix_set_color(35, 25, 0, 0);
        } else {
            rgb_matrix_set_color(35, 25, 25, 25);
        }
    } 
}
