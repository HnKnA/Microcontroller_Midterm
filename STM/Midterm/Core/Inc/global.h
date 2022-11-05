/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: A.Tuan
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"

extern int global_counter;

void updateCounter();

#define normalState 1
#define pressedRESET 2
#define pressedINC 3
#define pressedDEC 4

#define autoDec 5

extern int status;



#endif /* INC_GLOBAL_H_ */
