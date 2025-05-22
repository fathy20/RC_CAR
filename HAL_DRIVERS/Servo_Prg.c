/*
 * Servo_Prg.c
 *
 *  Created on: 18/11/2024
 *  Author: ENG/FATHY AHMED
 */

#include "../Serivecs_driver/STD_TYPES.h"
#include "../Serivecs_driver/BIT_MATH.h"
#include "../MCAL_DRIVERS/DIO_interface.h"
#include "../MCAL_DRIVERS/TIMER_Interface.h"
#include "avr/delay.h"
#include "Servo_Inteface.h"
#include "Servo_Private.h"


void SERVO_VidInitOCR1A(void)			//  mode 14  //
{
	DIO_VidSetPinDirection(3,5,1);
	TIMER1_VidInitializeMode15(FAST_PWM_ICR1,CLEAR,Normal);
}

void SERVO_VidInitOCR1B(void)			//  mode 15  //
{
	DIO_VidSetPinDirection(3,4,1);
	TIMER1_VidInitializeMode15(FAST_PWM_OCR1A,Normal,CLEAR);
}

void ServoSetAngleOCR1A(u32 Angle)		// angle here is the startup //
{
	TIMER1_VidSetICR1(Startup);
	TIMER1_VidSetOCR1A(Angle);
}



void ServoSetAngleOCR1B(u32 Angle)
{
	TIMER1_VidSetOCR1A(Startup);		//writing 19999 on OCR1A //
	TIMER1_VidSetOCR1B(Angle);			// writing required angle to go to //
}

void SetAngleOfServo(u16 InitialAngle , u16 LastAngle ) {

	/* min duty : 400
	   max duty : 2400
	 */

	if (InitialAngle <= LastAngle){

		for (u16 i = InitialAngle ; i < LastAngle ; i+=5 ){
			ServoSetAngleOCR1B(i);
			_delay_ms(1);
		}//end for loop

	}//end if InitialAngle <= LastAngle

	else {

		for (u16 i = InitialAngle ; i > LastAngle ; i-=5 ){
			ServoSetAngleOCR1B(i);
			_delay_ms(1);
		}//end for loop

	}//end else
}
