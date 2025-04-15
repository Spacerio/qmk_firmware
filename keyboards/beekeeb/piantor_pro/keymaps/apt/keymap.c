// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include <g/keymap_combo.h>

enum layers {
    BASE_LAYER,
    NUM_LAYER,
    SYM_LAYER,
    MISC_LAYER,
};

// BASE_LAYER mod taps
#define MT_S MT(MOD_LGUI, KC_S)
#define MT_T MT(MOD_LCTL, KC_T)
#define MT_H MT(MOD_LALT, KC_H)
#define MT_N MT(MOD_LALT, KC_N)
#define MT_E MT(MOD_LCTL, KC_E)
#define MT_A MT(MOD_LGUI, KC_A)
// NUM_LAYER mod taps
#define MT_4 MT(MOD_LGUI, KC_4)
#define MT_5 MT(MOD_LCTL, KC_5)
#define MT_6 MT(MOD_LALT, KC_6)
#define MT_DOWN MT(MOD_LALT, KC_DOWN)
#define MT_UP MT(MOD_LCTL, KC_UP)
#define MT_RIGHT MT(MOD_LGUI, KC_RIGHT)
// SYM_LAYER mod taps
#define MT_MINS MT(MOD_LGUI, KC_MINS)
#define MT_ASTR MT(MOD_LCTL, KC_ASTR)
#define MT_EQL MT(MOD_LALT, KC_EQL)
#define MT_DLR MT(MOD_LALT, KC_DLR)
#define MT_RPRN MT(MOD_LCTL, KC_RPRN)
#define MT_LPRN MT(MOD_LGUI, KC_LPRN)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE_LAYER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_W,    KC_G,    KC_D,    KC_F,    KC_B,                         KC_Q,    KC_L,    KC_U,    KC_O,   KC_Y,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_ESC,    KC_R,    MT_S,    MT_T,    MT_H,    KC_K,                         KC_J,    MT_N,    MT_E,    MT_A,    KC_I, KC_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_MINS,    KC_X,    KC_C,    KC_M,    KC_P,    KC_V,                         KC_Z, KC_COMM,  KC_DOT, KC_QUOT, KC_SLSH, KC_EXLM,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    KC_LCTL, LSFT_T(QK_REP), QK_REP,   LT(2, KC_ENT),  LT(1, KC_SPC),   MO(2)
                                      //`--------------------------'  `--------------------------'

  ),

    [NUM_LAYER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, XXXXXXX,    KC_1,    KC_2,    KC_3, XXXXXXX,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_0,    MT_4,    MT_5,    MT_6, XXXXXXX,                      KC_LEFT, MT_DOWN,   MT_UP,MT_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LGUI, XXXXXXX,    KC_7,    KC_8,    KC_9, XXXXXXX,                      KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            MO(3), KC_LSFT,  QK_REP,    _______,  KC_SPC,   MO(2)
                                      //`--------------------------'  `--------------------------'
  ),

    [SYM_LAYER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, KC_CIRC, KC_PERC, KC_SLSH, KC_AMPR, XXXXXXX,                      XXXXXXX, KC_LCBR, KC_LBRC, KC_RBRC, KC_RCBR, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_UNDS, MT_MINS, MT_ASTR,  MT_EQL, KC_TILD,                       KC_GRV,  MT_DLR, MT_LPRN, MT_RPRN, KC_EXLM, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_PLUS, KC_BSLS, KC_PIPE, XXXXXXX,                      XXXXXXX, KC_HASH,   KC_AT, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            MO(3), KC_LSFT, KC_LCTL,      MO(1),  KC_SPC,   MO(2)
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3( // Original SYM_LAYER, for reference only
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(3),  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

// Modifiers and whitespace on right hand
// Layers on left hand
// OR
// Modifiers and rep on left,
// Whitespace and layers on the right
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_split_3x6_3(
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
                       '*', '*', '*',  '*', '*', '*'
    );

static uint16_t last_keycode = KC_NO;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed && keycode != LSFT_T(QK_REP)) {
        last_keycode = keycode;
    }
    switch (keycode) {
        case LSFT_T(QK_REP):
            if (record->tap.count && record->event.pressed) {
                tap_code16(last_keycode);
                return false;
            }
            break;
    }
    return true;
}
