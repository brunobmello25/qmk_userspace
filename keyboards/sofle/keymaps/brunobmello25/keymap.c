// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _SYMBOLS,
    _FUNCTIONS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '"  |
 * |------+------+------+------+------+------| PLAY  |    |       |------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /    \       \-----------------------------------------'
 *            |      |      | ESC  |SUPER | / SPACE /      \ ENTER \  |BKSPC |      |      |      |
 *            |      |      |      |      |/ LAY_1 /        \ LAY_2 \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_QWERTY] = LAYOUT(
  KC_GRV,  KC_1, KC_2,         KC_3,         KC_4,         KC_5,                       KC_6, KC_7,         KC_8,         KC_9,         KC_0,    KC_NO,
  KC_TAB,  KC_Q, KC_W,         KC_E,         KC_R,         KC_T,                       KC_Y, KC_U,         KC_I,         KC_O,         KC_P,    KC_NO,
  KC_ESC,  KC_A, KC_S,         KC_D,         KC_F,         KC_G,                       KC_H, KC_J,         KC_K,         KC_L,         KC_SCLN, KC_QUOT,
  KC_LCTL, KC_Z, KC_X,         KC_C,         KC_V,         KC_B,   KC_NO,     KC_NO,   KC_N, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH, KC_LCTL,
                        KC_NO, KC_LALT, KC_LSFT, KC_LGUI, LT(1,KC_SPC),                 LT(2,KC_ENT), KC_BSPC, KC_LSFT, KC_LALT, KC_NO
),



/* SYMBOLS
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_SYMBOLS] = LAYOUT(
  KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_F12,
  KC_NO, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
  KC_LCTL,  KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, KC_NO,       KC_NO, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, KC_LCTL,
                       KC_NO, KC_LALT, KC_LSFT, KC_NO, KC_TRNS,       KC_TRNS, KC_NO, KC_LSFT, KC_LALT, KC_NO
),
/* FUNCTIONS
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | Ins  |      |      | PSCR |      |                    |      | PGUP | PGDN |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      | LAlt | LCTL | LSFT | Caps |-------.    ,-------| Left | Down |  Up  | Rght |      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | BSPC | DEL  |      |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /Enter  /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_FUNCTIONS] = LAYOUT(
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                          KC_NO,   KC_NO,   KC_NO,   KC_NO ,  KC_NO ,KC_NO,
  KC_NO, KC_INS,  KC_NO,   KC_NO,   KC_PSCR, KC_NO,                          KC_NO,   KC_PGUP, KC_PGDN, KC_NO,   KC_NO, KC_NO,
  KC_NO, KC_NO,   KC_LALT, KC_LCTL, KC_LSFT, KC_CAPS,                        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO, KC_NO,
  KC_LCTL, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), KC_NO,    KC_NO,       KC_NO,   KC_NO,   KC_BSPC, KC_DEL,  KC_NO,   KC_NO, KC_LCTL,
           KC_NO, KC_LALT, KC_LSFT, KC_NO, KC_TRNS,                             KC_TRNS, KC_NO, KC_LSFT, KC_LALT, KC_NO
)
};

const uint16_t PROGMEM esc_combo[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
};

#ifdef OLED_ENABLE

bool oled_task_user() {
    oled_set_cursor(0, 1);

    switch(get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write("Layer: QWERTY", false);
            break;
        case _SYMBOLS:
            oled_write("Layer: SYMBOLS", false);
            break;
        case _FUNCTIONS:
            oled_write("Layer: FUNCTIONS", false);
            break;
        default:
            oled_write("Layer: UNDEF", false);
            break;
    }

    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.caps_lock ? PSTR("Caps: ON") : PSTR("Caps: OFF"), false);

    return false;
}

#endif
