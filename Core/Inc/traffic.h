/*
 * traffic.h
 *
 *  Created on: Oct 25, 2024
 *      Author: Onii-Chan
 */

#ifndef INC_TRAFFIC_H_
#define INC_TRAFFIC_H_

#include "main.h"
#include "led7seg.h"
#include "input_reading.h"
#include "global.h"
#include "timer.h"
#include "modifyLight.h"

extern int counter0;
extern int counter1;
extern int mode;
extern int temp;
void fsm_mode(void);
void fsm_traffic_light(void);

#endif /* INC_TRAFFIC_H_ */
