/*
 * UART.h
 *
 *  Created on: Feb 17, 2026
 *      Author: gmv23
 */

#ifndef __UART_H__
#define __UART_H__

#include "main.h"

extern UART_HandleTypeDef huart4;
extern UART_HandleTypeDef huart3;
extern UART_HandleTypeDef huart6;

void MX_UART4_Init(void);
void MX_USART3_UART_Init(void);
void MX_USART6_UART_Init(void);

#endif
