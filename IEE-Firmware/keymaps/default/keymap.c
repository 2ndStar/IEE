#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_all(
KC_F2,  KC_1,    KC_3,    KC_5, KC_7,   KC_9,    KC_MINS, KC_BSLS,
KC_F1,  KC_ESC,  KC_2,    KC_4, KC_6,   KC_8,    KC_0,    KC_EQL,  KC_GRV,
KC_F3,  KC_TAB,  KC_W,    KC_R, KC_Y,   KC_I,    KC_P,    KC_RBRC,
KC_F4,  KC_Q,    KC_E,    KC_T, KC_U,   KC_O,    KC_LBRC, KC_BSPC,
KC_F6,  KC_A,    KC_D,    KC_G, KC_J,   KC_L,    KC_QUOT,
KC_F5,  KC_LCTL, KC_S,    KC_F, KC_H,   KC_K,    KC_SCLN, KC_ENT,
KC_F8,  KC_Z,    KC_C,    KC_B, KC_M,   KC_DOT,  KC_RSFT,
KC_F7,  KC_LSFT, KC_X,    KC_V, KC_N,   KC_COMM, KC_SLSH, MO(1),
KC_F10, MO(2),   KC_SPC,                MO(3),   KC_RWIN,
KC_F9,  KC_LWIN, KC_LALT,       KC_SPC, KC_RALT,          KC_RCTL),

[1] = LAYOUT_all(
KC_F2,  KC_1,    KC_3,    KC_5, KC_7,   KC_9,    KC_MINS, KC_BSLS,
KC_F1,  KC_ESC,  KC_2,    KC_4, KC_6,   KC_8,    KC_0,    KC_EQL,  KC_GRV,
KC_F3,  KC_TAB,  KC_W,    KC_R, KC_Y,   KC_I,    KC_P,    KC_RBRC,
KC_F4,  KC_Q,    KC_E,    KC_T, KC_U,   KC_O,    KC_LBRC, HPT_TOG,
KC_F6,  KC_A,    KC_D,    KC_G, KC_J,   KC_L,    KC_QUOT,
KC_F5,  KC_LCTL, KC_S,    KC_F, KC_H,   KC_K,    KC_SCLN, KC_ENT,
KC_F8,  KC_Z,    KC_C,    KC_B, KC_M,   KC_DOT,  KC_RSFT,
KC_F7,  KC_LSFT, KC_X,    KC_V, KC_N,   KC_COMM, KC_SLSH, MO(1),
KC_F10, MO(2),   KC_SPC,                MO(3),   KC_RWIN,
KC_F9,  KC_LWIN, KC_LALT,       KC_SPC, KC_RALT,          KC_RCTL),

[2] = LAYOUT_all(
KC_F2,  KC_1,    KC_3,    KC_5, KC_7,   KC_9,    KC_MINS, KC_BSLS,
KC_F1,  KC_ESC,  KC_2,    KC_4, KC_6,   KC_8,    KC_0,    KC_EQL,  KC_GRV,
KC_F3,  KC_TAB,  KC_W,    KC_R, KC_Y,   KC_I,    KC_P,    KC_RBRC,
KC_F4,  KC_Q,    KC_E,    KC_T, KC_U,   KC_O,    KC_LBRC, KC_BSPC,
KC_F6,  KC_A,    KC_D,    KC_G, KC_J,   KC_L,    KC_QUOT,
KC_F5,  KC_LCTL, KC_S,    KC_F, KC_H,   KC_K,    KC_SCLN, KC_ENT,
KC_F8,  KC_Z,    KC_C,    KC_B, KC_M,   KC_DOT,  KC_RSFT,
KC_F7,  KC_LSFT, KC_X,    KC_V, KC_N,   KC_COMM, KC_SLSH, MO(1),
KC_F10, MO(2),   KC_SPC,                MO(3),   KC_RWIN,
KC_F9,  KC_LWIN, KC_LALT,       KC_SPC, KC_RALT,          KC_RCTL),

[3] = LAYOUT_all(
KC_F2,  KC_1,    KC_3,    KC_5, KC_7,   KC_9,    KC_MINS, KC_BSLS,
KC_F1,  KC_ESC,  KC_2,    KC_4, KC_6,   KC_8,    KC_0,    KC_EQL,  KC_GRV,
KC_F3,  KC_TAB,  KC_W,    KC_R, KC_Y,   KC_I,    KC_P,    KC_RBRC,
KC_F4,  KC_Q,    KC_E,    KC_T, KC_U,   KC_O,    KC_LBRC, KC_BSPC,
KC_F6,  KC_A,    KC_D,    KC_G, KC_J,   KC_L,    KC_QUOT,
KC_F5,  KC_LCTL, KC_S,    KC_F, KC_H,   KC_K,    KC_SCLN, KC_ENT,
KC_F8,  KC_Z,    KC_C,    KC_B, KC_M,   KC_DOT,  KC_RSFT,
KC_F7,  KC_LSFT, KC_X,    KC_V, KC_N,   KC_COMM, KC_SLSH, MO(1),
KC_F10, MO(2),   KC_SPC,                MO(3),   KC_RWIN,
KC_F9,  KC_LWIN, KC_LALT,       KC_SPC, KC_RALT,          KC_RCTL),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
