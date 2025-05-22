/*
 * INTERRUPT_prg.c
 *
 *  Created on: 18/11/2024
 *  Author: ENG/FATHY AHMED
 */

#include "../Serivecs_driver/STD_TYPES.h"
#include "../Serivecs_driver/BIT_MATH.h"
#include "DIO_interface.h"
#include "INTERRUPT_Interface.h"
#include "INTERRUPT_private.h"

void GIE_VidEnable (void){
	//to enable general interrupt
	SET_BIT(SREG,I_BIT);
}

void GIE_VidDisable (void){
	//to disable general interrupt
	CLR_BIT(SREG,I_BIT);
}
