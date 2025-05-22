/*
 * main.c
 *
 *  Created on: 18/11/2024
 *  Author: ENG/FATHY AHMED
 */

/*****************************************************************************
 *****************************************************************************
 *        😊😊🤎               Welcome               😊😊🤎
 *
 * This Project is made by  : Eng/FATHY 
 *
 * What'sapp Number         : +201002137288
 *
 * The target from this project :
 *
 * Design and implement an autonomous car that could navigate through  a course
 * without any human intervention .
 *
 * To achieve this, we used a variety of embedded systems such as sensors   and
 * actuators to create a sophisticated control system that could process inputs
 * from the environment and make decisions in real-time.
 *
 * Using our algorithms which is suitable to improve the car's ability to recognize
 * and respond to different situations.
 *
 *
 ******************************************************************************
 ******************************************************************************/

#include "APP_DRIVER/MultipleTasksCar_Interface.h"
/* steps : 1 ) determine velocity 2) determine mode */

void main (){


	// initializiation function of car
	MultipleTasksCar_VidInit();

	 // to set the mode & velocity of the car
	u8 mode , velocity ;

					//  first  data to be sent using bluetooth is selecting the velocity  //
	while (1){
		velocity = MultipleTasksCar_GetMode() ;

		if (velocity <= '4' && velocity >= '1')
			break ;
	}//end while (1)


	MultipleTasksCar_SetCarVelocity(velocity) ;

					//  second data to be sent using bluetooth is selecting the mode //
	while (1){
		mode = MultipleTasksCar_GetMode() ;

		if (mode <= '4' && mode >= '1')
			break ;
	}//end while (1)

	// to implemnet ur target mode
	while (1){				// inside these functions more different data to be sent using bluetooth //
		switch (mode){
		case '1' :  MultipleTasksCar_GetDirections() ;          break ;				// manual mode
		case '2' :  MultipleTasksCar_LineFollower()  ;          break ;
		case '3' :  MultipleTasksCar_UltraSonic()    ;          break ;				// automatic mode
		case '4' :  MultipleTasksCar_MapLine()       ;          break ;
		}
	}



} // end of main



