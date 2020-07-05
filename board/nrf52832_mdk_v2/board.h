/* Copyright 2020 Wirepas Ltd. All Rights Reserved.
 *
 * See file LICENSE.txt for full license details.
 *
 */

#ifndef _BOARD_NRF52832_MDK_V2_BOARD_H_
#define _BOARD_NRF52832_MDK_V2_BOARD_H_

// Serial port pins
#define BOARD_USART_TX_PIN              20
#define BOARD_USART_RX_PIN              19
#define BOARD_USART_CTS_PIN             7  /* NOT ACTUALLY ATTACHED TO ANYTHING */
#define BOARD_USART_RTS_PIN             5  /* NOT ACTUALLY ATTACHED TO ANYTHING */

// List of GPIO pins for the LEDs on the board: LED R, G, B
#define BOARD_LED_PIN_LIST              {23, 22, 24}

// Active low polarity for LEDs
#define BOARD_LED_ACTIVE_LOW            true

// The board supports DCDC
#define BOARD_SUPPORT_DCDC

#endif /* _BOARD_NRF52832_MDK_V2_BOARD_H_ */
