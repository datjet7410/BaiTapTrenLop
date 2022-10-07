/*
 * traffic_light.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Nguyen Tien Dat
 */

#include "traffic_light.h"

void auto_red_on(){
	setTimerTrafficLight(200);
}
void auto_green_on(){
	setTimerTrafficLight(300);
}
void auto_yellow_on(){
	setTimerTrafficLight(400);
}
