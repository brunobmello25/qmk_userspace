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
  KC_GRV,  KC_1,  KC_2,         KC_3,          KC_4,         KC_5,                     KC_6,         KC_7,         KC_8,         KC_9,         KC_0,    KC_NO,
  KC_TAB,  KC_Q,  KC_W,         KC_E,          KC_R,         KC_T,                     KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,    KC_NO,
  KC_ESC,  KC_A,  LALT_T(KC_S), LCTL_T(KC_D),  LSFT_T(KC_F), KC_G,                     KC_H,         LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), KC_SCLN, KC_QUOT,
  KC_LCTL, KC_Z,  KC_X,         KC_C,          KC_V,         KC_B,  KC_NO,     KC_NO,  KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH, KC_LSFT,
  KC_NO,   KC_NO, KC_NO,        KC_LGUI,       LT(1,KC_SPC),                           LT(2,KC_ENT), KC_BSPC,      KC_NO,        KC_NO,        KC_NO
),



/* LOWER
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
  KC_NO,  KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, KC_NO,       KC_NO, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, KC_NO,
                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),
/* RAISE
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      |      |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_FUNCTIONS] = LAYOUT(
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_NO,  KC_NO  , KC_NO,  KC_NO ,  KC_NO ,KC_NO,
  KC_NO, KC_INS,  KC_PSCR, KC_APP,  KC_NO,   KC_NO,                        KC_PGUP, KC_NO,   KC_UP, KC_NO, C(KC_BSPC), KC_BSPC,
  KC_NO, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,   KC_CAPS,                       KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, KC_BSPC,
  KC_NO, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), KC_NO,    KC_NO,       KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
