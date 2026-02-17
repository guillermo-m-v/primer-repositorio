/*
 * I2C.h
 *
 *  Created on: Feb 17, 2026
 *      Author: gmv23
 */

#ifndef INC_I2C_H_
#define INC_I2C_H_

#include "main.h"

extern I2C_HandleTypeDef hi2c1;
extern I2C_HandleTypeDef hi2c2;
extern I2C_HandleTypeDef hi2c3;

void MX_I2C1_Init(void);
void MX_I2C2_Init(void);
void MX_I2C3_Init(void);

#endif /* INC_I2C_H_ */
