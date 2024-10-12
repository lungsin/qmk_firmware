// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

#include "encoder.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_ESC, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC, KC_TAB, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_MUTE, KC_NO, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LALT, KC_LCTL, MO(3), MO(2), KC_SPC, MO(4), KC_LSFT, KC_LALT, KC_LCTL),
    [1] = LAYOUT(KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_F, KC_K, KC_N, KC_G, KC_W, KC_J, KC_DOT, KC_U, KC_O, KC_Y, KC_TRNS, KC_TRNS, KC_S, KC_T, KC_R, KC_D, KC_B, KC_M, KC_L, KC_E, KC_A, KC_I, KC_SLSH, KC_TRNS, KC_V, KC_Z, KC_X, KC_C, KC_P, KC_MUTE, KC_NO, KC_COMM, KC_H, KC_QUOT, KC_Q, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TILD, KC_ASTR, KC_PLUS, KC_DLR, KC_AT, KC_BSLS, KC_AMPR, KC_MINS, KC_SLSH, KC_COLN, KC_TRNS, KC_TRNS, KC_DOT, KC_LCBR, KC_RCBR, KC_EQL, KC_CIRC, KC_EXLM, KC_UNDS, KC_LPRN, KC_RPRN, KC_DQUO, KC_TRNS, KC_TRNS, KC_GRV, KC_LT, KC_GT, KC_HASH, KC_QUES, KC_TRNS, KC_TRNS, KC_PERC, KC_PIPE, KC_LBRC, KC_RBRC, KC_QUOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(5), MO(6), KC_TRNS, KC_TRNS),
    [3] = LAYOUT(KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, KC_TRNS, KC_LBRC, KC_LCBR, KC_EQL, KC_UNDS, KC_LT, KC_TRNS, KC_TRNS, KC_GT, KC_PLUS, KC_MINS, KC_RCBR, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(5), MO(6), KC_TRNS, KC_TRNS),
    [4] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ESC, LALT(KC_LEFT), LCTL(KC_F), LALT(KC_RGHT), KC_INS, KC_PGUP, LCTL(KC_LEFT), KC_UP, LCTL(KC_RGHT), KC_BSPC, KC_BSPC, KC_CAPS, OSM(MOD_LSFT), OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_RALT), KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT, KC_BSPC, KC_TRNS, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_LGUI, KC_TRNS, KC_TRNS, KC_CAPS, KC_HOME, KC_PSCR, KC_END, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(5), KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [5] = LAYOUT(QK_BOOT, CG_TOGG, DF(0), DF(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, KC_NO, KC_NO, KC_PEQL, KC_PAST, KC_PPLS, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_BSPC, KC_NO, KC_NO, OSM(MOD_LSFT), OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_RALT), KC_NO, KC_4, KC_5, KC_6, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSLS, KC_PMNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_0, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [6] = LAYOUT(QK_BOOT, CG_TOGG, DF(0), DF(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_BSPC, KC_NO, KC_NO, OSM(MOD_LSFT), OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_RALT), KC_F11, KC_F4, KC_F5, KC_F6, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};
