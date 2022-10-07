/*
 * fsm_manual.c
 *
 *  Created on: Oct 7, 2022
 *      Author: Nguyen Tien Dat
 */

#include "fsm_manual.h"

void fsm_manual_run(){
	switch(status){
	case MAN_RED:

		if(timer1_flag == 1){
			status = AUTO_RED;
			setTimerTrafficLight(500);
		}
		break;
	case MAN_YELLOW:
		break;
	case MAN_GREEN:
		break;
	default:
		break;
	}
}
