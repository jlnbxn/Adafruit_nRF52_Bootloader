/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _PROMICRO_NRF52840
#define _PROMICRO_NRF52840

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER      1
#define LED_PRIMARY_PIN  PINNUM(0, 15)
#define LED_STATE_ON     1

#define NEOPIXELS_NUMBER 0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTON_DFU     PINNUM(1, 2)
#define BUTTON_DFU_OTA PINNUM(0, 12)
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "ProMicro"
#define BLEDIS_MODEL        "ProMicro nRF52840"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID          0x1209
#define USB_DESC_UF2_PID      0x5284
#define USB_DESC_CDC_ONLY_PID 0x5284

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME "ProMicro"
#define UF2_VOLUME_LABEL "PROMICRO"
#define UF2_BOARD_ID     "nRF52840-ProMicro-v0"
#define UF2_INDEX_URL    "https://github.com/joric/nrfmicro/wiki"

#endif // _PROMICRO_NRF52840
