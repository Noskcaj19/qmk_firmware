
#pragma once


#ifdef LAYOUT_split_3x6_3
#define MIRYOKU_LAYERMAPPING_GAME_NUM LAYOUT_split_3x6_3
#define MIRYOKU_LAYER_GAME_NUM \
    KC_NO,        KC_6,    KC_7,    KC_8,    KC_9,      KC_0,                   U_NA,   U_NA,    U_NA,    U_NA, TD(U_TD_BOOT), KC_NO, \
    MO(U_GAME_NUM), KC_1,  KC_2,    KC_3,    KC_4,      KC_5,                   U_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, \
    KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_GRV,    KC_NO,                  U_NA,   U_NA,    U_NA,    KC_ALGR, U_NA,    KC_NO, \
                                          KC_DOT,  KC_0,   KC_MINS,   S(KC_EQUAL),  KC_NO ,  KC_NO

#define MIRYOKU_LAYERMAPPING_GAME LAYOUT_split_3x6_3
#define MIRYOKU_LAYER_GAME \
     KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV, \
     MO(U_GAME_NUM),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TD(TD_GAME),  \
                                          KC_LCTL, KC_SPC, KC_LALT,      KC_ENT, KC_BSPC, KC_LGUI


#if MIRYOKU_ALPHAS_ISRT

#define MIRYOKU_LAYERMAPPING_BASE LAYOUT_split_3x6_3
#define MIRYOKU_LAYER_BASE \
     XXXXXXX,     KC_Y,             KC_C,          KC_L,         KC_M,         KC_K,  /*|*/   KC_Z, KC_F,         KC_U,         KC_COMM,        KC_QUOT,          XXXXXXX, \
     XXXXXXX,     LGUI_T(KC_I),     LALT_T(KC_S),  LCTL_T(KC_R), LSFT_T(KC_T), KC_G,  /*|*/   KC_P, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_A),   LGUI_T(KC_O),     XXXXXXX,  \
     TD(TD_GAME), LT(U_BUTTON, KC_Q), ALGR_T(KC_V), KC_W,        KC_D,         KC_J,  /*|*/   KC_B, KC_H,         KC_SLSH,      ALGR_T(KC_DOT), LT(U_BUTTON, KC_X), TD(TD_GAME),  \
                        LT(U_MEDIA, KC_ESC), LT(U_NAV, KC_SPC), LT(U_MOUSE, KC_TAB),             LT(U_SYM, KC_ENT), LT(U_NUM, KC_BSPC), LT(U_FUN, KC_DEL)

#else

#define MIRYOKU_LAYERMAPPING_BASE LAYOUT_split_3x6_3
#define MIRYOKU_LAYER_BASE \
     KC_GRV,      KC_Q,             KC_W,          KC_E,         KC_R,         KC_T,  /*|*/   KC_Y, KC_U,         KC_I,         KC_O,           KC_P,                  KC_BSLS, \
     XXXXXXX,     LGUI_T(KC_A),     LALT_T(KC_S),  LCTL_T(KC_D), LSFT_T(KC_F), KC_G,  /*|*/   KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L),   LGUI_T(KC_SCLN),       KC_QUOT,  \
     TD(TD_GAME), LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C,        KC_V,         KC_B,  /*|*/   KC_N, KC_M,         KC_COMM,      ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), TD(TD_GAME),  \
                        LT(U_MEDIA, KC_ESC), LT(U_NAV, KC_SPC), LT(U_MOUSE, KC_TAB),             LT(U_SYM, KC_ENT), LT(U_NUM, KC_BSPC), LT(U_FUN, KC_DEL)
#endif

#define MIRYOKU_LAYERMAPPING_TAP LAYOUT_split_3x6_3
#define MIRYOKU_LAYER_TAP \
DF(U_BASE),        KC_Y,              KC_C,              KC_L,              KC_M,              KC_K,              KC_Z,              KC_F,              KC_U,              KC_COMM,           KC_QUOT,       XXXXXXX, \
XXXXXXX,           KC_I,              KC_S,              KC_R,              KC_T,              KC_G,              KC_P,              KC_N,              KC_E,              KC_A,              KC_O,          XXXXXXX, \
XXXXXXX,           KC_Q,              KC_V,              KC_W,              KC_D,              KC_J,              KC_B,              KC_H,              KC_SLSH,           KC_DOT,            KC_X,          XXXXXXX, \
                                                         KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL
#endif

#ifdef LAYOUT_split_4x6_5
#if MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_LAYERMAPPING_BASE LAYOUT_split_4x6_5
#define MIRYOKU_LAYER_BASE \
     KC_ESC,      KC_1,             KC_2,          KC_3,         KC_4,         KC_5,          KC_6, KC_7,         KC_8,         KC_9,           KC_0,                  KC_BSPC, \
     KC_GRV,      KC_Q,             KC_W,          KC_E,         KC_R,         KC_T,  /*|*/   KC_Y, KC_U,         KC_I,         KC_O,           KC_P,                  KC_BSLS, \
     XXXXXXX,     LGUI_T(KC_A),     LALT_T(KC_S),  LCTL_T(KC_D), LSFT_T(KC_F), KC_G,  /*|*/   KC_H, RSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L),   LGUI_T(KC_QUOT),       KC_QUOT,  \
     TD(TD_GAME), LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C,        KC_V,         KC_B,  /*|*/   KC_N, KC_M,         KC_COMM,      ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), TD(TD_GAME),  \
                        LT(U_MEDIA, KC_ESC), LT(U_NAV, KC_SPC), LT(U_MOUSE, KC_TAB),             LT(U_SYM, KC_ENT), LT(U_NUM, KC_BSPC), LT(U_FUN, KC_DEL), \
                                             KC_LSFT, DF(U_GAME),                                          U_NA, KC_RSFT
#endif
// #if MIRYOKU_ALPHAS_GRAPHITE
// #define MIRYOKU_LAYERMAPPING_BASE LAYOUT_split_4x6_5
#define MIRYOKU_LAYERMAPPING_TAP LAYOUT_split_4x6_5
#define MIRYOKU_LAYER_TAP \
     KC_ESC,      KC_1,             KC_2,          KC_3,         KC_4,         KC_5,          KC_6, KC_7,         KC_8,         KC_9,           KC_0,                  KC_BSPC, \
     KC_GRV,      KC_B,             KC_L,          KC_D,         KC_W,         KC_Z,  /*|*/KC_QUOT, KC_F,         KC_O,         KC_U,           KC_J,                  KC_BSLS, \
     XXXXXXX,     LGUI_T(KC_N),     LALT_T(KC_R),  LCTL_T(KC_T), LSFT_T(KC_S), KC_G,  /*|*/   KC_Y, RSFT_T(KC_H), LCTL_T(KC_A), LALT_T(KC_E),   LGUI_T(KC_I),          KC_QUOT,  \
     TD(TD_GAME), LT(U_BUTTON, KC_Q), ALGR_T(KC_X), KC_M,        KC_C,         KC_V,  /*|*/   KC_K, KC_P,         KC_COMM,      ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), TD(TD_GAME),  \
                        LT(U_MEDIA, KC_ESC), LT(U_NAV, KC_SPC), LT(U_MOUSE, KC_TAB),             LT(U_SYM, KC_ENT), LT(U_NUM, KC_BSPC), LT(U_FUN, KC_DEL), \
                                             KC_LSFT, DF(U_GAME),                                          DF(U_BASE), KC_RSFT
//#endif



#define MIRYOKU_LAYERMAPPING_GAME_NUM LAYOUT_split_4x6_5
#define MIRYOKU_LAYER_GAME_NUM \
    U_NA,        U_NA,     U_NA,    U_NA,    U_NA,      U_NA,                   U_NA,   U_NA,    U_NA,    U_NA, U_NA,          U_NA, \
    U_NA,        KC_6,     KC_7,    KC_8,    KC_9,      KC_0,                   U_NA,   U_NA,    U_NA,    U_NA, TD(U_TD_BOOT), U_NA, \
    MO(U_GAME_NUM), KC_1,  KC_2,    KC_3,    KC_4,      KC_5,                   U_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,    U_NA, \
    U_NA,        U_NA,     U_NA,    U_NA,    KC_GRV,    U_NA,                   U_NA,   U_NA,    U_NA,    KC_ALGR, U_NA,       U_NA, \
                                          KC_DOT,  KC_0,   KC_MINS,   S(KC_EQUAL),  U_NA ,  U_NA, \
                                                  U_NA, U_NA,                   U_NA, U_NA

#define MIRYOKU_LAYERMAPPING_GAME LAYOUT_split_4x6_5
#if 0
#define MIRYOKU_LAYER_GAME \
    KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV, \
    MO(U_GAME_NUM),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TD(TD_GAME),  \
                                         KC_LCTL, KC_SPC, KC_LALT,      KC_ENT, KC_BSPC, KC_LGUI, \
                                            U_NA, KC_TAB,                  U_NA, U_NA
#endif
#define MIRYOKU_LAYER_GAME \
     KC_ESC,   KC_5,    KC_1,    KC_2,    KC_3,    KC_4,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
     KC_T,     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV, \
     KC_G,     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
     KC_B,     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,                        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TD(TD_GAME),  \
                                          KC_ESC,  KC_SPC, KC_LALT,      KC_ENT, KC_BSPC, KC_LGUI, \
                                    TD(U_TD_U_BASE), KC_TAB,                 DF(U_BASE), U_NA


#endif
