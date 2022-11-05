/*
 * normal_fsm.c
 *
 *  Created on: Nov 5, 2022
 *      Author: A.Tuan
 */

#include "normal_fsm.h"

void fsm_simple_buttons_run (){
	switch(status){
	case normalState:


		if(timer1_flag == 1){
			status = autoDec;
		}


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


		display7SEG(global_counter);

		break;
	case pressedRESET:
		global_counter = 0;
		display7SEG(global_counter);
		status = normalState;
		setTimer1(1000);
		break;
	case pressedINC:
		global_counter++;
		display7SEG(global_counter);
		status = normalState;
		setTimer1(1000);
		break;
	case pressedDEC:
		global_counter--;
		display7SEG(global_counter);
		status = normalState;
		setTimer1(1000);
		break;
	default:
		if(status == 0){
		status = normalState;
		setTimer1(1000);
		}
		break;
	}
}
