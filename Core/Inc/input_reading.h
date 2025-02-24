/*
 * input_reading.h
 *
 *  Created on: Oct 25, 2024
 *      Author: Onii-Chan
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#include "main.h"

#define NO_OF_BUTTONS 3

/* timer interrupt for button read */
void button_reading();

/* check button pressed flag */
int is_button_pressed(int index);

#endif /* INC_INPUT_READING_H_ */
