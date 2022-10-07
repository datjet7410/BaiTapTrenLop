/*
 * global.h
 *
 *  Created on: Sep 30, 2022
 *      Author: Nguyen Tien Dat
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "stm32f1xx_hal.h"

#define INIT         0
#define AUTO_RED     1
#define AUTO_GREEN   2
#define AUTO_YELLOW  3

#define MAN_RED		11
#define MAN_YELLOW	12
#define MAN_GREEN	13

#define B_Pin GPIO_PIN_0
#define B_GPIO_Port GPIOA
#define A_Pin GPIO_PIN_1
#define A_GPIO_Port GPIOA
#define A1_Pin GPIO_PIN_4
#define A1_GPIO_Port GPIOA
#define B1_Pin GPIO_PIN_0
#define B1_GPIO_Port GPIOB

extern int status;

extern int timer_traffic_light_flag;
extern int timer_traffic_light_counter;

extern int button1_flag;

void setTimerTrafficLight(int duration);
void timerRun();

#endif /* INC_GLOBAL_H_ */
