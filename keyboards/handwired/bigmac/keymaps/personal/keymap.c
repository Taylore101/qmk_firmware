#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_GESC,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         LCTL(LGUI(KC_Q)), LGUI(KC_Q),LCAG(KC_SPC),		  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,
        KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         LGUI(KC_T), LGUI(KC_R),  LGUI(KC_N),           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLASH,
        KC_CAPS,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         LCTL(LSFT(KC_TAB)),LGUI(KC_W), LCTL(KC_TAB),   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,       KC_PGUP,
        KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         LGUI(KC_C),  LAG(KC_V),  LGUI(KC_V),      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,      KC_UP,   KC_PGDN,
        KC_LCTL,     KC_LALT,      KC_LGUI,     KC_SPC,                MO(1),   	LGUI(KC_SPC),   MO(2),   	      KC_BSPC,           KC_RGUI,      KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        KC_NLCK,     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_PPLS, 		KC_PMNS,	KC_PAST,		  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MINS, KC_EQL,  LCTL(LGUI(KC_Q)),
        KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_P7,			KC_P8,  	KC_P9,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLASH,
        KC_CAPS,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_P4,			KC_P5, 		KC_P6,   		  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,       KC_PGUP,
        KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_P1,    		KC_P2,   	KC_P3,      	  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,      KC_UP,   KC_PGDN,
        KC_LCTL,     KC_LALT,      KC_LGUI,     KC_SPC,                KC_TRNS,   		KC_P0,    	KC_KP_DOT,   	      KC_BSPC,           KC_RALT,      KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [2] = LAYOUT(
        KC_GESC,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_NO, 			KC_NO,			KC_NO,		  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  LCTL(LGUI(KC_Q)),
        KC_TAB,      RGB_TOG, RGB_MODE_FORWARD, KC_E,    KC_R,  KC_T,  KC_MPLY, 		KC_VOLU,		KC__MUTE,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLASH,
        KC_CAPS,     RGB_VAI, RGB_HUI, RGB_SAI, KC_F,    KC_G,         KC_MPRV, 		KC_VOLD,  		KC_MNXT,  	  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,       KC_PGUP,
        KC_LSFT,     RGB_MODE_PLAIN,RGB_MODE_BREATHE,RGB_MODE_FORWARD,KC_V,KC_B,   KC_NO,			KC_NO, 			KC_NO,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,       KC_UP,   KC_PGDN,
        TG(3),     KC_LALT,      KC_LGUI,     KC_SPC,                  KC_NO,   		KC_NO,   		KC_TRNS,   	  KC_BSPC,           KC_RALT,      KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [3] = LAYOUT(
        TG(0),     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET,
        KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
        KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
        KC_NO,     KC_NO,      KC_NO,     KC_NO,           KC_NO, KC_NO, KC_NO,        KC_NO,        KC_NO,    KC_NO,       KC_NO, KC_NO, KC_NO
    ),
//    [#] = LAYOUT(
//        RESET,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
//        KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
//        KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
//        KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
//        KC_NO,     KC_NO,      KC_NO,     KC_NO,           TG(1), KC_NO, TG(2),        KC_NO,        KC_NO,    KC_NO,       KC_NO, KC_NO, KC_NO
//    ),
        };


//const rgblight_segment_t PROGMEM default_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//    {0, 38, HSV_BLUE}    // Light all LED
//    );
// const rgblight_segment_t PROGMEM capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 38, HSV_RED}    // Light all LED
//     );
// const rgblight_segment_t PROGMEM tenkey_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 38, HSV_ORANGE}    // Light all LED
//     );
// const rgblight_segment_t PROGMEM control_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 38, HSV_CYAN}    // Light all LED
//     );
// const rgblight_segment_t PROGMEM reset_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 38, HSV_MAGENTA}    // Light all LED
//     );

// const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
//     capslock_layer//,
    // tenkey_layer,
    // control_layer,
    // reset_layer
// );

// void keyboard_post_init_user(void) {
//     // Enable the LED layers
//     rgblight_layers = my_rgb_layers;
// }

// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(0, led_state.caps_lock);
//     return true;
// }

// layer_state_t layer_state_set_user(layer_state_t state) {
//    rgblight_set_layer_state(0, layer_state_cmp(state|default_layer_state, 0));
//    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
//     rgblight_set_layer_state(1, layer_state_cmp(state, 1));
//     rgblight_set_layer_state(2, layer_state_cmp(state, 2));
//     rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    // return state;
// }