/*
 * UART.c
 *
 *  Created on: Feb 17, 2026
 *      Author: gmv23
 */

#include "UART.h"

UART_HandleTypeDef huart4;
UART_HandleTypeDef huart3;
UART_HandleTypeDef huart6;

void MX_UART4_Init(void)
{
    huart4.Instance = UART4;
    huart4.Init.BaudRate = 9600;
    huart4.Init.WordLength = UART_WORDLENGTH_9B;
    huart4.Init.StopBits = UART_STOPBITS_1;
    huart4.Init.Parity = UART_PARITY_NONE;
    huart4.Init.Mode = UART_MODE_TX_RX;
    huart4.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    huart4.Init.OverSampling = UART_OVERSAMPLING_16;

    if (HAL_UART_Init(&huart4) != HAL_OK)
    {
        Error_Handler();
    }
}

void MX_USART3_UART_Init(void)
{
    huart3.Instance = USART3;
    huart3.Init = huart4.Init;

    if (HAL_UART_Init(&huart3) != HAL_OK)
    {
        Error_Handler();
    }
}

void MX_USART6_UART_Init(void)
{
    huart6.Instance = USART6;
    huart6.Init = huart4.Init;

    if (HAL_UART_Init(&huart6) != HAL_OK)
    {
        Error_Handler();
    }
}

