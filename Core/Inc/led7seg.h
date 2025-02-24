/*
 * led7seg.h
 *
 *  Created on: Oct 25, 2024
 *      Author: Onii-Chan
 */

#ifndef INC_LED7SEG_H_
#define INC_LED7SEG_H_

#include "global.h"
#include "timer.h"
#include "main.h"
#include "traffic.h"
void display7SEGM (int num);
void display7SEG (int num);
void auto_update7SEG();
void update7SEG (int index);
void update7SEGM (int index);
#endif /* INC_LED7SEG_H_ */
