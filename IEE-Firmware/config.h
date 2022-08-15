#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4A54
#define PRODUCT_ID      0x5052  
#define DEVICE_VER      0x0001
#define MANUFACTURER    jaydenta8
#define PRODUCT         IEE
#define DESCRIPTION     QMK-programmable 74 keys with separated arrows keys

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 9

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


/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 9

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

#define MATRIX_ROW_PINS {D1, D0, B2, B3, D3, D5, F4, F5, F6, F7}
#define MATRIX_COL_PINS {F0, B7, D2, C7, C6, B6, B5, B4, D4}
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN F1
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 24
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 200
#define RGBLIGHT_SLEEP // RGB will turn off when PC is put to sleep

#define SOLENOID_PIN D7
#define SOLENOID_DEFAULT_DWELL 12 
#define SOLENOID_MAX_DWELL 100
#define SOLENOID_MIN_DWELL 4
#define SOLENOID_DWELL_STEP_SIZE 1
