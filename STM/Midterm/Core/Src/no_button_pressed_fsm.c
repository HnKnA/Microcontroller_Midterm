/*
 * no_button_pressed_fsm.c
 *
 *  Created on: Nov 5, 2022
 *      Author: A.Tuan
 */

#include "no_button_pressed_fsm.h"


void no_button_pressed_fsm(){
	switch(status){
	case autoDec:
		if(timer1_flag == 1){
		setTimer1(100);
		global_counter--;
		if(global_counter < 0){
			global_counter = 0;
		}
		}
		display7SEG(global_counter);

		if(button1_flag == 1){
			button1_flag = 0;
			status = pressedRESET;
		}

		if(button2_flag == 1){
			button2_flag = 0;
			status = pressedINC;
		}

		if(button3_flag == 1){
			button3_flag = 0;
			status = pressedDEC;
		}
		break;
	default:
		break;
	}
}
