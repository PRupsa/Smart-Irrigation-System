#ifndef UART_H
#define UART_H

#include <lpc17xx.h>

void uart_init(void);
void uart_byte_transmit(char c);
void uart_str_transmit( char *ptr);
char uart_byte_receive(void);
void delay_ms(unsigned int ms);
#endif