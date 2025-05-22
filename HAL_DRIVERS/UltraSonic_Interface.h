/*
 * UltraSonic_Interface.h
 *
 *  Created on: 18/11/2024
 *  Author: ENG/FATHY AHMED
 */

#ifndef HAL_DRIVERS_ULTRASONIC_INTERFACE_H_
#define HAL_DRIVERS_ULTRASONIC_INTERFACE_H_

#include "../Serivecs_driver/STD_TYPES.h"

void Ultrasonic_init(void);
u16 Ultrasonic_readDistance(void);

#endif /* HAL_DRIVERS_ULTRASONIC_INTERFACE_H_ */
