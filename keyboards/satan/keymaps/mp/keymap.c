// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "satan.h"
// TODO: replace your ugly german brckets with #defines

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _DEF 0
#define _SPC 1
#define _TAB 2
#define _SFX 3

// dual-role shortcuts
#define TABDUAL   LT(_TAB, KC_TAB)
#define CAPSDUAL  CTL_T(KC_ESC)
#define SPACEDUAL LT(_SPC, KC_SPACE)
#define ENTERDUAL CTL_T(KC_ENT)
// arrow cluster duality bottom right corner
#define ARRLEFT  ALT_T(KC_LEFT)
#define ARRDOWN  GUI_T(KC_DOWN)
#define ARRUP    SFT_T(KC_UP)
#define ARRRIGHT CTL_T(KC_RIGHT)
// german brackets
#define GER_CUR_L RALT(KC_7)    // [
#define GER_CUR_R RALT(KC_0)    // ]
#define GER_PAR_L LSFT(KC_8)    // (
#define GER_PAR_R LSFT(KC_9)    // )
#define GER_ANG_L KC_NUBS       // <
#define GER_ANG_R LSFT(KC_NUBS) // >
#define GER_BRC_L RALT(KC_8)    // [
#define GER_BRC_R RALT(KC_9)    // ]

// increase readability 
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEF] = KEYMAP_ISO_SPLITRSHIFT(
        KC_GRV,   KC_1,    KC_2,    KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   \
        KC_TAB,  KC_Q,    KC_W,    KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,   \
        KC_ESC, KC_A,    KC_S,    KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT, \
        KC_LSFT,  KC_NUBS, KC_Z,    KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,   KC_NO,      \
        KC_LCTL,  KC_LGUI, KC_LALT,             KC_SPACE,                       KC_RALT,  KC_RGUI, KC_APP, KC_RCTL),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    return MACRO_NONE;
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
}
