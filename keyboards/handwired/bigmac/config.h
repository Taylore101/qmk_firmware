/* Copyright 2020 Taylore101
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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x1010
#define DEVICE_VER      0x0001
#define MANUFACTURER    Taylore101
#define PRODUCT         BigMac

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 17

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { B7, D5, C7, F1, F0 }
#define MATRIX_COL_PINS { D3, D1, D0, D4, C6, D7, E6, B4, B5, B6, B2, B3, B1, F7, F6, F5, F4 }

#define DIODE_DIRECTION ROW2COL

//LEDs
#define RGB_DI_PIN B0
#define RGBLED_NUM 20
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
//#define RGBLIGHT_LIMIT_VAL 200
#define LED_CAPS_LOCK_PIN D2

//define default rgb color
#define RGBLIGHT_DEFAULT_HUE 169

