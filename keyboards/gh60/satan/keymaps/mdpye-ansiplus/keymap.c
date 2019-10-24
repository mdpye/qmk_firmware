#include "satan.h"

#define _DEF 0
#define _FN  1
#define _MEDIA 2

#define MEDIA MO(_MEDIA)
#define FNS MO(_FN)

#define KC_WDLF LCTL(KC_LEFT)
#define KC_WDRT LCTL(KC_RIGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEF] = LAYOUT_all(
            KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, XXXXXXX, \
            KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
            FNS,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT, \
            KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, XXXXXXX, \
            KC_LCTL, KC_LGUI, KC_LALT,                           KC_SPACE,                            KC_RALT, FNS,     MEDIA,   KC_RCTL \
            ),

    [_FN] = LAYOUT_all(
            KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, XXXXXXX, \
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
            _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
            _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WDLF, KC_PGDN, KC_PGUP, KC_WDRT, XXXXXXX, XXXXXXX, XXXXXXX, \
            _______, _______, _______,                           KC_ENT,                              _______, _______, _______, _______ \
            ),

    [_MEDIA] = LAYOUT_all(
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, \
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
            _______, _______, _______, _______, _______, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______, _______, _______, KC_MPLY, \
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, \
            _______, _______, _______,                           KC_MUTE,                             _______, _______, _______, _______ \
            ),
};
