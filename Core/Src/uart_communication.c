/*
 * uart_communication.c
 *
 *  Created on: Dec 13, 2022
 *      Author: dell
 */
#include "uart_communication.h"

void uart_communiation(UART_HandleTypeDef huart2) {
	HAL_UART_Transmit(&huart2, (void*)str, sprintf(str, "!H:%d#\r\n", 50), 1000);
}

void readDataUART(UART_HandleTypeDef huart2){
	if (buffer_flag){
		int temp = index_buffer - 1;
		buffer_flag = 0;
		if (temp < 0) temp = 29;
		if (buffer[temp] == 'a') {
			HAL_GPIO_WritePin(orange_GPIO_Port, orange_Pin, 1);
		}
		else {
			HAL_GPIO_WritePin(orange_GPIO_Port, orange_Pin, 0);
		}
	}
}
