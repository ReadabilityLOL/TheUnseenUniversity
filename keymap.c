/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

enum layers{
  BASE,
  FN,
};

#define KC_TASK G(KC_TAB)
#define KC_FLXP G(KC_E)
// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_O LALT_T(KC_O)
#define HOME_E LSFT_T(KC_E)
#define HOME_U LCTL_T(KC_U)

// Right-hand home row mods
#define HOME_H RCTL_T(KC_H)
#define HOME_T RSFT_T(KC_T)
#define HOME_N LALT_T(KC_N)
#define HOME_S RGUI_T(KC_S)


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_tkl_ansi(
        KC_CAPS,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_LBRC,  KC_RBRC,    KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_QUOTE, KC_COMMA, KC_DOT,   KC_P,     KC_Y,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_SLASH, KC_EQL,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_ESC,   HOME_A,   HOME_O,   HOME_E,   HOME_U,   KC_I,     KC_D,     HOME_H,   HOME_T,   HOME_N,   HOME_S,   KC_MINUS,              KC_ENT,
        KC_LSFT,            KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,     KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,                  KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(FN), KC_APP,   KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [FN] = LAYOUT_tkl_ansi(
        KC_CAPS,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  BL_DOWN,  BL_UP,    KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,  _______,  BL_STEP,
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_7,     KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_J,     _______,  _______,  _______,
        _______,  KC_ESC,   KC_WH_U,  KC_WBAK,  KC_WFWD,  _______,  KC_PGUP,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  KC_LALT,  KC_WH_D,  KC_LSFT,  KC_LCTL,  _______,  KC_PGDN,  _______,  _______,  _______,  _______,  _______,              _______,
        BL_TOGG,            KC_WH_L,  C(KC_Z),  C(KC_X),  C(KC_C),  C(KC_V),  KC_BTN1,  KC_BTN2,  KC_BTN3,  _______,  KC_WH_L,              _______,            _______,
        BL_STEP,  BL_UP,    BL_DOWN,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),
};
