#include QMK_KEYBOARD_H

enum keyboard_layers {
    _BASE = 0,
    _FN   = 1,
    _M1   = 2,
    _M2   = 3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        /* Row 0 */  MO(_M1),   KC_ESC,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T, /*This ones actually technically row 4*/  KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC, KC_RPRN,
        /* Row 1 */  MO(_M2),   KC_TAB,  KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_ENT,  KC_DEL,
        /* Row 2 */  MO(_FN),   KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_UP,  MO(_FN), TO(_FN),
        /* Row 3 */ KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC, KC_LEFT,KC_DOWN,KC_RGHT
    ),

    [_FN] = LAYOUT(
        /* Row 0 */ KC_NO,   KC_GRV,  KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_DEL,  KC_NO,
        /* Row 1 */ KC_NO,   KC_CAPS, KC_EXLM, KC_AT,   KC_HASH,KC_DLR, KC_PERC,KC_MINS,KC_EQL, KC_LBRC,KC_RBRC,KC_BSLS,KC_ENT,  KC_NO,
        /* Row 2 */ KC_NO,   KC_LSFT, KC_UNDS, KC_PLUS, KC_LPRN,KC_RPRN,KC_AMPR, KC_N,   KC_M,   KC_DOT, KC_PGUP,KC_NO,KC_NO,
        /* Row 3 */ KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC, KC_HOME,KC_PGDN,KC_END
    ),
    [_M1] = LAYOUT(
        /* Row 0 */ KC_NO, KC_NO, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
        /* Row 1 */ KC_NO, KC_NO, KC_BRID,KC_BRIU,KC_MPRV,KC_MPLY,KC_MNXT,KC_MUTE,KC_VOLD,KC_VOLU,KC_MSTP,KC_MSEL,KC_NO, KC_NO,
        /* Row 2 */ KC_NO, KC_NO, KC_PSCR,KC_SLCK,KC_PAUS,KC_INS, KC_HOME,KC_END, KC_NO, KC_NO, KC_PGUP,KC_NO, KC_NO,
        /* Row 3 */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT,KC_DOWN,KC_RGHT
    ),

    [_M2] = LAYOUT(
        /* Row 0 */ KC_NO, KC_NO, KC_KP_SLASH, KC_KP_ASTERISK, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_MINUS, KC_NO, KC_NO,
        /* Row 1 */ KC_NO, KC_NO, KC_KP_4,     KC_KP_5,        KC_KP_6, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_PLUS,  KC_NO, KC_NO,
        /* Row 2 */ KC_NO, KC_NO, KC_KP_1,     KC_KP_2,        KC_KP_3, KC_NO, KC_NO, KC_KP_0, KC_NO, KC_KP_DOT, KC_NO, KC_KP_ENTER, KC_NO,
        /* Row 3 */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO
    );
};

