#include QMK_KEYBOARD_H

#define _DEFAULT  0
#define _SYM      1
#define _RAISE    2

#define SHFT_A MT(MOD_LSFT, KC_A)
#define SHFT_L MT(MOD_RSFT, KC_L)
#define SHFT_GRV MT(MOD_LSFT, KC_GRV)
#define SHFT_HSH MT(MOD_RSFT, KC_NONUS_HASH)

#define CTRL_Z MT(MOD_LCTL, KC_Z)
#define CTRL_M MT(MOD_RCTL, KC_M)
#define ALT_X  MT(MOD_LALT, KC_X)
#define ALT_N  MT(MOD_RALT, KC_N)
#define SUP_C  MT(MOD_LGUI, KC_C)
#define SUP_B  MT(MOD_RGUI, KC_B)

#define SYM_F  LT(_SYM, KC_F)
#define SYM_J  LT(_SYM, KC_J)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
     * |      Q |      W |      E |      R |      T |      Y |      U |      I |      O |      P |
     * +-+------+-+------+-+------+-+------+-+------+-+------+-+------+-+------+-+------+-+------+
     *   | Shft A |      S |      D | Sym  F |      G |      H | Sym  J |      K | Shft L |
     *   +----+---+----+---+----+---+----+---+----+---+----+---+----+---+----+---+--------+
     *        | Ctrl Z | Alt  X | Sup  C |      V | Sup  B | Alt  N | Ctrl M |
     *        +--------+------+-+--------+--------+--------+--------+--------+---+
     *                        |              Raise             Space             |
     *                        +--------------------------------------------------+
     */

    [_DEFAULT] = LAYOUT( \
            KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I, KC_O,   KC_P,
            SHFT_A, KC_S,   KC_D,   SYM_F,  KC_G,   KC_H,   SYM_J,  KC_K, SHFT_L,
            CTRL_Z, ALT_X,  SUP_C,  KC_V,   SUP_B,  ALT_N,  CTRL_M,
            LT(_RAISE, KC_SPC)
        ),

    /*
     * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
     * | Esc    |        |        |        |        | Home   | PgDn   | PgUp   | End    | BkSpc  |
     * +-+------+-+------+-+------+-+------+-+------+-+------+-+------+-+------+-+------+-+------+
     *   | Tab    |        |        |        |        | Left   | Down   | Up     | Right  |
     *   +----+---+----+---+----+---+----+---+----+---+----+---+----+---+----+---+--------+
     *        | Enter  |        |        |        |        |        |        |
     *        +--------+------+-+--------+--------+--------+--------+--------+---+
     *                        |                                                  |
     *                        +--------------------------------------------------+
     */

    [_RAISE] = LAYOUT( \
            KC_ESC,  KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_BSPC,
            KC_TAB,  RGB_TOG, RGB_VAD, RGB_VAI, RGB_MOD, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
            KC_ENT,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NO,
            KC_NO
        ),

    /*
     * +--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
     * |      1 |      2 |      3 |      4 |      5 |      6 |      7 |      8 |      9 |      0 |
     * +-+------+-+------+-+------+-+------+-+------+-+------+-+------+-+------+-+------+-+------+
     *   | Shft ` |      \ |      - |      = |      [ |      ] |      ; |      ' | Shft # |
     *   +----+---+----+---+----+---+----+---+----+---+----+---+----+---+----+---+--------+
     *        |        |        |        |        |      , |      . |      / |
     *        +--------+------+-+--------+--------+--------+--------+--------+---+
     *                        |                                                  |
     *                        +--------------------------------------------------+
     */

    [_SYM] = LAYOUT( \
            KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
            SHFT_GRV, KC_BSLS,  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_SCLN,  KC_QUOT,  SHFT_HSH,
            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_COMM,  KC_DOT,   KC_SLSH,
            KC_NO
        ),

};
