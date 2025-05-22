/*
 * UART_Prg.c
 *  Created on: 18/11/2024
 *  Author: ENG/FATHY AHMED
 */

/*     Libraries    */
#include "../Serivecs_driver/STD_TYPES.h"
#include "../Serivecs_driver/BIT_MATH.h"

/* Lower Layer Interface Files*/
#include "UART_Private.h"
#include "avr/delay.h"

/* Own Driver Files*/
#include "DIO_interface.h"

static void (*UART_Ptr)(void) = NULL ;

void UART_SetCallBack(  void (*ptr)(void) ){
	UART_Ptr = ptr ;
}

void UART_VidInit (){
	/* to define pins of TX RX */
	DIO_VidSetPinDirection(3,0,0);			//PIND0 as output (RX)
	DIO_VidSetPinDirection(3,1,1);			//PIND1 as input  (TX)

	SET_BIT(UCSRB,RXEN);					// enable reciever
	SET_BIT(UCSRB,TXEN);					// transmitter enable
	CLR_BIT(UCSRB,UCSZ2);

	u8 UCSRC_help = 0b10000000 ;
	CLR_BIT(UCSRC_help,UMSEL);				// asynchronous selected
	CLR_BIT(UCSRC_help,UPM1);
	CLR_BIT(UCSRC_help,UPM0);				// parity disabled
	CLR_BIT(UCSRC_help,USBS);				// only 1 stop bit selected
	SET_BIT(UCSRC_help,UCSZ1);
	SET_BIT(UCSRC_help,UCSZ0);				// character size set to 8 bit
	CLR_BIT(UCSRC_help,UCPOL);				// rising for transmit and falling for reading
	UCSRC = UCSRC_help ;					//	UCSRC_help = 0b10000110, final value of the UCSRC


	SET_BIT(UCSRA, U2X);					// enabling double speed so that we can choose the 2400 bps
	UBRRH = 0 ;								// URSEL set tol zero to select UBBRx
	UBRRL = 51 ;							// selecting the baudrate to 2400 bps
}

void UART_VidInitUsingInterrupt () {
	/* to define pins of TX RX */
	DIO_VidSetPinDirection(3,0,0);			//PIND0 as output (RX)
	DIO_VidSetPinDirection(3,1,1);			//PIND1 as input  (TX)

	SET_BIT(UCSRB,RXCIE);					// recieve interrupt enabled
	SET_BIT(UCSRB,RXEN);					// enable reciever
	SET_BIT(UCSRB,TXEN);					// transimtter enable
	CLR_BIT(UCSRB,UCSZ2);

	u8 UCSRC_help = 0b10000000 ;
	CLR_BIT(UCSRC_help,UMSEL);				// asynchronous selected
	CLR_BIT(UCSRC_help,UPM1);
	CLR_BIT(UCSRC_help,UPM0);				// parity disabled
	CLR_BIT(UCSRC_help,USBS);				// only 1 stop bit selected
	SET_BIT(UCSRC_help,UCSZ1);
	SET_BIT(UCSRC_help,UCSZ0);				// character size set to 8 bit
	CLR_BIT(UCSRC_help,UCPOL);				// rising for transmit and falling for reading
	UCSRC = UCSRC_help ;					//	UCSRC_help = 0b10000110, final value of the UCSRC

	SET_BIT(UCSRA, U2X);					// enabling double speed so that we can choose the 2400 bps
	UBRRH = 0 ;								// URSEL set tol zero to select UBBRx
	UBRRL = 51 ;							// selecting the baudrate to 2400 bps
}

void UART_VidSendData(u8 Copy_U8Data){
	while ( !GET_BIT(UCSRA,UDRE) );
	UDR = Copy_U8Data ;
}

u8 UART_VidRecieveDataForInterruptPurpose(){
	return UDR ;
}

u8 UART_VidRecieveData(){
	while ( !GET_BIT(UCSRA,RXC) );
	return UDR ;
}

void UART_VidSendString (u8 Copy_U8String[]){
	u8 i = 0 ;
	while (Copy_U8String[i] != '\0'){
		UART_VidSendData(Copy_U8String[i]);
		i++ ;
	}
}

void __vector_13(void){
	UART_Ptr();
}//end ISR FUNC
