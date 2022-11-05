/*
 * global.c
 *
 *  Created on: Nov 5, 2022
 *      Author: A.Tuan
 */

#include "global.h"

int global_counter = 5;

void updateCounter(){
	if(global_counter > 9)
		global_counter = 0;

	if(global_counter < 0)
		global_counter = 9;
}


int status = 0;
