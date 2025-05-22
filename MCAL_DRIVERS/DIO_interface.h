/*
 *  File : DIO_interface.h
 *  Created on: 18/11/2024
 *  Author: ENG/FATHY AHMED
 *  Version : V1
 *  Describtion : --------------
 */

/*     Libraries    */
#include "../Serivecs_driver/STD_TYPES.h"
#include "../Serivecs_driver/BIT_MATH.h"

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_


#define INPUT 		0
#define OUTPUT		1

#define LOW			0
#define HIGH 		1


/* PINS Definition */
#define PIN0   0
#define PIN1   1
#define PIN2   2
#define PIN3   3
#define PIN4   4
#define PIN5   5
#define PIN6   6
#define PIN7   7



void DIO_VidSetPinDirection (u8 Copy_U8Port , u8 Copy_U8Pin , u8 Copy_U8Dir ) ;
void DIO_VidSetPortDirection (u8 Copy_U8Port , u8 Copy_U8Dir ) ;
void DIO_VidSetPinValue (u8 Copy_U8Port , u8 Copy_U8Pin , u8 Copy_U8Val ) ;
void DIO_VidSetPortValue (u8 Copy_U8Port , u8 Copy_U8Val ) ;
void DIO_VidTogglePinValue (u8 Copy_U8Port , u8 Copy_U8Pin ) ;
u8 DIO_U8GetPinValue (u8 Copy_U8Port , u8 Copy_U8Pin ) ;

#endif
