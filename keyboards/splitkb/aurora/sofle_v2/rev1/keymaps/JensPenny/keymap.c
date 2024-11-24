#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

enum sofle_layers {
    _BASE, // Base layer with QWERTY layout
    _FKEYS, // Left down layer - numbers and general tokens
    _NAVIGATE, // Right down layer - screenshot / main utility functions
    _MACRO // Both down layer - macro's, debugging and quickformat shortcuts
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
    [_BASE] = LAYOUT(
        KC_GRV,     KC_1,    KC_2,   KC_3,   KC_4,   KC_5,       KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_GRV,
        KC_ESC,     KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,       KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,
        KC_TAB,     KC_A,    KC_S,   KC_D,   KC_F,   KC_G,       KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT,
        KC_LSFT,    KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,__, __,KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LGUI,    KC_LALT, KC_LCTL, MO(1), KC_ENT, KC_SPC,     MO(2),  KC_RCTL, KC_RALT, KC_RGUI),

    [_FKEYS] = LAYOUT(_______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_F12, _______, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, _______, KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______, _______, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______, _______, _______, _______, _______, _______, _______, MO(3), _______, _______, _______),
    [_NAVIGATE] = LAYOUT(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS, KC_PSCR, KC_APP, XXXXXXX, XXXXXXX, KC_PGUP, C(KC_LEFT), KC_UP, C(KC_RGHT), C(KC_BSPC), KC_BSPC, _______, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_CAPS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_BSPC, _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), XXXXXXX, _______, _______, XXXXXXX, KC_HOME, XXXXXXX, KC_END, XXXXXXX, _______, _______, _______, _______, MO(3), _______, _______, _______, _______, _______, _______),
    [_MACRO] = LAYOUT(XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)


