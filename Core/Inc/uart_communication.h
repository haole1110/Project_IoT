/*
 * uart_communication.h
 *
 *  Created on: Dec 13, 2022
 *      Author: dell
 */

#ifndef INC_UART_COMMUNICATION_H_
#define INC_UART_COMMUNICATION_H_

#include "main.h"
#include "stdio.h"
#include "stdlib.h"
#include "global.h"

void uart_communiation(UART_HandleTypeDef huart2);
void readDataUART(UART_HandleTypeDef huart2);

#endif /* INC_UART_COMMUNICATION_H_ */
