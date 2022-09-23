#pragma once

enum {
    TD_GAME,
};

void dance_game_finished(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
    } else {
        if (layer_state_is(U_GAME)) {
            layer_off(U_GAME);
        } else {
            layer_on(U_GAME);
        }
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_GAME] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_game_finished, NULL),
};

const uint16_t PROGMEM game_tab[] = {
  MO(U_GAME_NUM), KC_ESC, COMBO_END,
};

const uint16_t PROGMEM game_back[] = {
  MO(U_GAME_NUM), KC_LSFT, COMBO_END,
};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(game_tab, KC_TAB),
    COMBO(game_back, KC_BSPC),
};


void rgb_matrix_indicators_kb(void) {
    bool set = false;
    if (layer_state_is(U_NUM)) {
        rgb_matrix_set_color_all(0, 0, 7);
        set = true;
    }

    if (layer_state_is(U_MOUSE)) {
        rgb_matrix_set_color_all(7, 7, 0);
        set = true;
    }

    if (layer_state_is(U_GAME)) {
        rgb_matrix_set_color_all(0, 0, 7);
        set = true;
    }

    if (layer_state_is(U_SYM)) {
        rgb_matrix_set_color_all(0, 7, 0);
        set = true;
    }

    if (layer_state_is(U_NAV)) {
        rgb_matrix_set_color_all(0, 7, 7);
        set = true;
    }

    if (layer_state_is(U_FUN)) {
        rgb_matrix_set_color_all(7, 0, 0);
        set = true;
    }

    if (layer_state_is(U_MEDIA)) {
        rgb_matrix_set_color_all(7, 0, 7);
        set = true;
    }

    if (!set) {
        rgb_matrix_set_color_all(0, 0, 0);
    }

    if (host_keyboard_led_state().caps_lock) {
        if (layer_state_is(U_GAME)) {
            rgb_matrix_set_color(35, 25, 0, 0);
        } else {
            rgb_matrix_set_color(35, 25, 25, 25);
        }
    } else if(is_caps_word_on()) {
        rgb_matrix_set_color(35, 0, 15, 0);
    }
}
