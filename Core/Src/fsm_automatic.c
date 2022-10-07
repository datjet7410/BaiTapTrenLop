/*
 * fsm_automatic.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Nguyen Tien Dat
 */

#include "fsm_automatic.h"

void fsm_automatic_run(){
	switch(status){
	case INIT:
		HAL_GPIO_WritePin(GPIOA, A_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, B_Pin, 0);

		status = AUTO_RED;
		auto_red_on();
		break;
	case AUTO_RED:

		HAL_GPIO_WritePin(GPIOA, A_Pin, 0);
		HAL_GPIO_WritePin(GPIOA, B_Pin, 1);

		if(timer_traffic_light_flag == 1){
			status = AUTO_GREEN;
			auto_green_on();
		}
		if(button1_flag == 1){
			status = MAN_RED;
			button1_flag = 0;
		}
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(GPIOA, A_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, B_Pin, 0);

		if(timer_traffic_light_flag == 1){
			status = AUTO_YELLOW;
			auto_yellow_on();
		}
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(GPIOA, A_Pin, 1);
		HAL_GPIO_WritePin(GPIOA, B_Pin, 1);

		if(timer_traffic_light_flag == 1){
			status = AUTO_RED;
			auto_red_on();
		}
		break;
	default:
		break;
	}
}

