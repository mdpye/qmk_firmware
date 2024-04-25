#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum planck_layers {
  _QWERTY_LINUX,
  _QWERTY_MAC,
  _LOWER_LINUX,
  _LOWER_MAC,
  _RAISE_LINUX,
  _RAISE_MAC,
  _FN,
  _BRACKETS
};

enum extra_keycodes {
  LINUX = SAFE_RANGE,
  MAC
};

#define LOWER MO(_LOWER_LINUX)
#define RAISE MO(_RAISE_LINUX)
#define LOW_M MO(_LOWER_MAC)
#define RAI_M MO(_RAISE_MAC)
#define FNS MO(_FN)

#define KC_WDLF LCTL(KC_LEFT)
#define KC_WDRT LCTL(KC_RIGHT)
#define MA_WDLF LALT(KC_LEFT)
#define MA_WDRT LALT(KC_RIGHT)
#define MA_PGUP LGUI(KC_UP)
#define MA_PGDN LGUI(KC_DOWN)
#define MA_HOME LGUI(KC_LEFT)
#define MA_END LGUI(KC_RIGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  Fn  | GUI  | LAlt |Lower |Space |Enter |Raise | GUI  | RAlt | Debug| Ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY_LINUX] = LAYOUT_ortho_4x12( \
  KC_ESC,  KC_Q, KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC, \
  KC_TAB,  KC_A, KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z, KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
  KC_LCTL, FNS,  KC_LGUI, KC_LALT, LOWER, KC_SPC, KC_ENT, RAISE, KC_RGUI, KC_RALT, FNS,     KC_RCTL \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   "  |   £  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | #    |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   \  |      |      |      |      |      |   -  |   [  |    ] |   =  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE_LINUX] = LAYOUT_ortho_4x12( \
  KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, \
  XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NONUS_HASH, \
  _______, KC_NUBS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_LBRC, KC_RBRC, KC_EQL,  _______, \
  _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______ \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      | Home | PgUp | PgDn | End  |      | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Mac  |      |      |      |      |      | Left | Down |  Up  |Right |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      | WdLt | PgUp | PgDn | WdRt |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER_LINUX] = LAYOUT_ortho_4x12( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, KC_DEL, \
  MAC,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX, \
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
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_BRACKETS] = LAYOUT_ortho_4x12( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, KC_LBRC, KC_LCBR, KC_LPRN, XXXXXXX, XXXXXXX, KC_RPRN, KC_RCBR, KC_RBRC, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______ \
),

[_FN] = LAYOUT_ortho_4x12( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX, \
  _______, KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
  _______, _______, _______, _______, _______, KC_ENT,  KC_ENT,  _______, _______, _______, _______, RGB_TOG \
),

/* MAC SPECIFIC LAYERS */

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | LGUI | Fns  | LAlt |Lower |Space |Enter |Raise | GUI  | RAlt | Fns  | Ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY_MAC] = LAYOUT_ortho_4x12( \
  KC_ESC,  KC_Q, KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC, \
  KC_TAB,  KC_A, KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z, KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
  KC_LCTL, KC_LGUI, FNS,  KC_LALT, LOW_M, KC_SPC, KC_ENT, RAI_M, KC_RGUI, KC_RALT, FNS,     KC_RCTL \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   "  |   £  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | #    |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   \  |      |      |      |      |      |   -  |   [  |    ] |   =  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE_MAC] = LAYOUT_ortho_4x12( \
  KC_NUBS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, \
  XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NONUS_HASH, \
  _______, KC_GRV,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_LBRC, KC_RBRC, KC_EQL,  _______, \
  _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______ \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      | Home | PgUp | PgDn | End  |      | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Linux|      |      |      |      |      | Left | Down |  Up  |Right |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      | WdLt | PgUp | PgDn | WdRt |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER_MAC] = LAYOUT_ortho_4x12( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MA_HOME, MA_PGDN, MA_PGUP, MA_END,  XXXXXXX, KC_DEL, \
  LINUX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MA_WDLF, MA_PGDN, MA_PGUP, MA_WDRT, XXXXXXX, _______, \
  _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______ \
),

};

layer_state_t layer_state_set_user(layer_state_t state) {
  state = update_tri_layer_state(state, _LOWER_LINUX, _RAISE_LINUX, _BRACKETS);
  return update_tri_layer_state(state, _LOWER_MAC, _RAISE_MAC, _BRACKETS);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LINUX:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY_LINUX);
      }
      return false; // Skip all further processing of this key
    case MAC:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY_MAC);
      }
      return false; // Skip all further processing of this key
    default:
      return true; // Process all other keycodes normally
  }
}

