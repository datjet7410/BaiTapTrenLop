/*
 * global.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Nguyen Tien Dat
 */

#include "global.h"

int status = INIT;
int timer_traffic_light_counter = 100;
int timer_traffic_light_flag = 0;

int button1_flag = 0;

void setTimerTrafficLight(int duration){
	timer_traffic_light_counter = duration;
	timer_traffic_light_flag = 0;
}

void timerRun(){
	if(timer_traffic_light_counter > 0){
		timer_traffic_light_counter--;
		if(timer_traffic_light_counter <= 0){
			timer_traffic_light_flag = 1;
		}
	}
}
