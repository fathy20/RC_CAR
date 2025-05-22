/*
 * IR_Interface.h
 *
 *  Created on: 18/11/2024
 *  Author: ENG/FATHY AHMED
 */


/*     Libraries    */
#include "../Serivecs_driver/STD_TYPES.h"
#include "../Serivecs_driver/BIT_MATH.h"

#ifndef HAL_DRIVERS_IR_INTERFACE_H_
#define HAL_DRIVERS_IR_INTERFACE_H_


#define IR_PORT_1      PORTC
#define IR_PIN_LEFT     0

#define IR_PORT_2      PORTD
#define IR_PIN_RIGHT    3

#define HIGH 1
#define LOW 0


//define PORT
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3


void IR_Init();



#endif /* HAL_DRIVERS_IR_INTERFACE_H_ */
