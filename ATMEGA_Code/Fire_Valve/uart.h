/*
 * UART driver header file
 */


#ifndef UART_H_
#define UART_H_

#include "std_types.h"


void UART_init(uint32 baud_rate);


void UART_sendByte(const uint8 data);

uint8 UART_recieveByte(void);


void UART_sendString(const uint8 *Str);

void UART_receiveString(uint8 *Str);

#endif /* UART_H_ */
