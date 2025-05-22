/*
 * IR_Prg.c
 *
 *  Created on: 18/11/2024
 *  Author: ENG/FATHY AHMED
 */

/*     Libraries    */
#include "../Serivecs_driver/STD_TYPES.h"
#include "../Serivecs_driver/BIT_MATH.h"

/* Lower Layer Interface Files*/
#include <util/delay.h>

/* Own Driver Files*/
#include "../MCAL_DRIVERS/DIO_interface.h"
#include "IR_Interface.h"

void IR_Init(){
	DIO_VidSetPinDirection(IR_PORT_1,IR_PIN_LEFT,LOW);
	DIO_VidSetPinDirection(IR_PORT_2,IR_PIN_RIGHT,LOW);
}


