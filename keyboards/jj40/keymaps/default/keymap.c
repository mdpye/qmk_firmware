#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER  1
#define _RAISE  2
#define _FN     3
#define _BRACKETS 4

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define FNS MO(_FN)
#define KC_WDLF LCTL(KC_LEFT)
#define KC_WDRT LCTL(KC_RIGHT)

#define KEYMAP LAYOUT_ortho_4x12

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  Fn  | GUI  | LAlt |Lower |    Space    |Raise | GUI  | RAlt | Ctrl |Enter |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = KEYMAP( \
  KC_ESC,  KC_Q, KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC, \
  KC_TAB,  KC_A, KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z, KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
  KC_LCTL, FNS,  KC_LGUI, KC_LALT, LOWER, KC_SPC, KC_ENT, RAISE, KC_RGUI, KC_RALT, DEBUG,     KC_RCTL \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   "  |   £  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | #    |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   \  |      |      |      |      |      |   -  |   [  |    ] |   =  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = KEYMAP( \
  KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, \
  XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NONUS_HASH, \
  _______, KC_NUBS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_LBRC, KC_RBRC, KC_EQL,  _______, \
  _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______ \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      | Home | PgUp | PgDn | End  |      | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      | Left | Down |  Up  |Right |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      | WdLt | PgUp | PgDn | WdRt |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = KEYMAP( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, KC_DEL, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WDLF, KC_PGDN, KC_PGUP, KC_WDRT, XXXXXXX, _______, \
  _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______ \
),

/* Brackets
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |   [  |   {  |   (  |      |      |  )   |  }   |  ]   |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_BRACKETS] = KEYMAP( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, KC_LBRC, KC_LCBR, KC_LPRN, XXXXXXX, XXXXXXX, KC_RPRN, KC_RCBR, KC_RBRC, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______ \
),

[_FN] = KEYMAP( \
  RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX, \
  _______, KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
  _______, _______, _______, _______, _______, KC_ENT,  KC_ENT,  _______, _______, _______, _______, RGB_TOG \
)
};

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _BRACKETS);
}

// bool next = false;
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   if (next) {
//     rgblight_setrgb(0x60,  0x00, 0x00);
//   } else {
//     rgblight_setrgb(0x00,  0x60, 0x00);
//   }
//   next = !next;
//   return true;
// }

// uint32_t layer_state_set_user(uint32_t state) {
//   state = update_tri_layer_state(state, _LOWER, _RAISE, _BRACKETS);
//   switch (biton32(state)) {
//     case _RAISE:
//         rgblight_setrgb(0x00,  0x00, 0xFF);
//         break;
//     case _LOWER:
//         rgblight_setrgb(0xFF,  0x00, 0x00);
//         break;
//     case _FN:
//         rgblight_setrgb(0xFF,  0xFF, 0x00);
//         break;
//     case _BRACKETS:
//         rgblight_setrgb(0xFF,  0x00, 0xFF);
//         break;
//     default: //  for any other layers, or the default layer
//         rgblight_setrgb(0x00,  0xFF, 0xFF);
//         break;
//     }
//   return state;
// }
