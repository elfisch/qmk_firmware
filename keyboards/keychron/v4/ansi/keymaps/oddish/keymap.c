/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "elfisch.h"

enum layers {
    MAC_BASE,
    WIN_BASE,
    _FN1,
    _FN2,
    _FN3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_60_ansi(
        KC_ESC,   KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,  KC_8,  KC_9,     KC_0,                    KC_MINS,                KC_EQL,           KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,  KC_I,  KC_O,     KC_P,                    KC_LBRC,                KC_RBRC,          KC_BSLS,
        KC_LCTL,  KC_A,     KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,  KC_K,  KC_L,     KC_SCLN,                 KC_QUOT,                                  KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,  KC_M,  KC_COMM,  KC_DOT,                  KC_SLSH,                                  KC_RSFT,
        KC_LCTL,  KC_LGUI,  KC_LALT,                             KC_SPC,                          MT(MOD_RALT,  KC_LEFT),  LT(WIN_BASE, KC_DOWN),  LT(_FN1, KC_UP),  LT(_FN2, KC_RGHT)),

    [WIN_BASE] = LAYOUT_60_ansi(
        KC_GRV,   KC_F1,   KC_F2,     KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_DEL,
        _______,  _______,  _______,  _______,  KC_MPLY,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            KC_MPLY,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
        _______,  _______,  _______,                                _______,                                KC_HOME,  _______,  KC_PGUP,  KC_END),

    [_FN1] = LAYOUT_60_ansi(
        QK_GESC,  KC_P1,    KC_P2,    KC_P3,    KC_P4,    KC_P5,    KC_P6,    KC_P7,    KC_P8,    KC_P9,    KC_P0,    KC_PMNS,  KC_PPLS,  QK_BOOT,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_INS,   KC_NUM,   KC_PSCR,  KC_SCRL,  KC_PAUS,  EE_CLR,
        KC_CAPS,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            KC_PENT,
        _______,            _______,  KC_PAST,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PDOT,  KC_PSLS,            _______,
        NK_ON,    NK_OFF,   _______,                                _______,                                _______,  KC_PGDN,  _______,  _______),

    [_FN2] = LAYOUT_60_ansi(
        RGB_TOG,  _______,  _______,  _______,  _______,   _______,  _______,  _______,   _______,   _______,  _______,  _______,  _______,  _______,
        RGB_VAI,  RGB_SAI,  RGB_HUI,  RGB_SPI,  RGB_MOD,   _______,  _______,  _______,   RGB_M_SW,  RGB_M_R,  RGB_M_P,  _______,  _______,  _______,
        RGB_VAD,  RGB_SAD,  RGB_HUD,  RGB_SPD,  RGB_RMOD,  RGB_M_G,  _______,  _______,   RGB_M_K,   _______,  _______,  _______,            _______,
        _______,            _______,  RGB_M_X,  _______,   _______,  RGB_M_B,  RGB_M_SN,  _______,   _______,  _______,  _______,            _______,
        _______,  _______,  _______,                                 _______,                                  _______,  _______,  _______,  _______),

    [_FN3] = LAYOUT_60_ansi(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______)
};
