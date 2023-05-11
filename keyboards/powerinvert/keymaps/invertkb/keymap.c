#include QMK_KEYBOARD_H //PADRÃO

enum custom_keycodes {
  M_CTRL_SHIFT_T = SAFE_RANGE,
  M_CTRL_C,
  M_CTRL_V,
  M_CTRL_TAB,
  M_GUI_V,
  LAYERTXT //A
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case M_CTRL_SHIFT_T:
      if (record->event.pressed) {
        register_code(KC_LCTL);
        register_code(KC_LSFT);
        register_code(KC_T);
      } else {
        unregister_code(KC_T);
        unregister_code(KC_LSFT);
        unregister_code(KC_LCTL);
      }
      break;
    case M_CTRL_C:
      if (record->event.pressed) {
        register_code(KC_LCTL);
        register_code(KC_C);
      } else {
        unregister_code(KC_C);
        unregister_code(KC_LCTL);
      }
      break;
    case M_CTRL_V:
      if (record->event.pressed) {
        register_code(KC_LCTL);
        register_code(KC_V);
      } else {
        unregister_code(KC_V);
        unregister_code(KC_LCTL);
      }
      break;
    case M_CTRL_TAB:
      if (record->event.pressed) {
        register_code(KC_LCTL);
        register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
        unregister_code(KC_LCTL);
      }
      break;
    case M_GUI_V:
      if (record->event.pressed) {
        register_code(KC_LGUI);
        register_code(KC_V);
      } else {
        unregister_code(KC_V);
        unregister_code(KC_LGUI);
      }
      break;
    default:
      return true; // Processar todas as outras teclas normalmente
  }
  return false; // Pule todas as outras etapas de processamento de teclas
}



// CRIANDO AS LAYERS DA KAYMAP
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT_power(
        KC_PGUP, KC_HOME, KC_INS, KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, 
        KC_PGDN, KC_END, KC_DEL, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
        M_CTRL_SHIFT_T, M_GUI_V, M_CTRL_TAB, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENTER, 
        M_CTRL_C, KC_UP, M_CTRL_V, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, 
        KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPACE, KC_RALT, LAYERTXT, KC_MENU, KC_RCTL),

    [1] = LAYOUT_power(
        KC_PSLS, KC_PDOT, KC_PAST, KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_BSPC, 
        KC_PMNS, KC_P0, KC_PPLS, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, 
        KC_P7, KC_P8, KC_P9, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
        KC_P4, KC_P5, KC_P6, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, 
        KC_P1, KC_P2, KC_P3, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, KC_TRNS, KC_RCTL),

    [2] = LAYOUT_power(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};
