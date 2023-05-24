// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// ENCODER_MAP_ENABLE = yes

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 1 │ 2 │ 3 │ 4 │
     * ├───┼───┼───┼───┤
     * │ 5 │ 6 │ 7 │ 8 │
     * ├───┼───┼───┤───│
     * │ 9 │ 0 │ A │ B │
     * ├───┼───┼───┼───┤
     * │ C │ D │ E │ F │
     * ├───┼───┼───┤───│
     * │ G | H │ I │ J │ Z
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_numpad_5x4(
        KC_P1,   KC_P2,   KC_P3,   KC_P4,
        KC_P5,   KC_P6,   KC_P7,   KC_P8,
        KC_P9,   KC_P0,   KC_A,    KC_B,
        KC_C,    KC_D,    KC_E,    KC_F,
        KC_G,    KC_H,    KC_I,    KC_J, KC_Z
    )
};


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_K);
        } else {
            tap_code(KC_L);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_N);
        } else {
            tap_code(KC_M);
        }
    } else if (index == 2) { /* Third encoder */
        if (clockwise) {
            tap_code(KC_O);
        } else {
            tap_code(KC_P);
        }
    }
    return false;
}