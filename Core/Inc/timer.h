/*
 * timer.h
 *
 *  Created on: Oct 25, 2024
 *      Author: Onii-Chan
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "main.h"
#include "input_reading.h"
#include "traffic.h"

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;
extern int timer7_flag;
extern int TIMER_CYCLE;
void setTimer0();
void setTimer2();
void timerRun();

#endif /* INC_TIMER_H_ */
