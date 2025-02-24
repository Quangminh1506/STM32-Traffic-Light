/*
 * modifyLight.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Onii-Chan
 */

#include "modifyLight.h"


void modify_red(void) {
	if (timer1_flag == 1) {
		HAL_GPIO_TogglePin(GPIOA, LED_RED1_Pin);
		HAL_GPIO_TogglePin(GPIOA, LED_RED2_Pin);
		setTimer1(500);
	}

	auto_update7SEG_red();

	if (is_button_pressed(1)) {
		if (temp >= 1000 && temp <= 99000) {
			temp += 1000;
		}
		if (temp > 99000) {
			temp = 1000;
		}
	}

	if (is_button_pressed(2)) {
		if (counter_green + counter_yellow >= temp) {
			temp = counter_green + counter_yellow;
		}
		counter_red = temp;
		traffic = START;
		mode = 1;
	}

}

void modify_yellow(void) {
	if (timer1_flag == 1) {
		HAL_GPIO_TogglePin(GPIOA, LED_YELLOW1_Pin);
		HAL_GPIO_TogglePin(GPIOA, LED_YELLOW2_Pin);
		setTimer1(500);
	}

	auto_update7SEG_yellow();

	if (is_button_pressed(1)) {
		if (temp >= 1000 && temp <= 99000) {
			temp += 1000;
		}
		if (temp > 99000) {
			temp = 1000;
		}
	}

	if (is_button_pressed(2)) {
		if (counter_green + temp >= counter_red) {
			temp = counter_red - counter_green;
		}
		counter_yellow = temp;
		traffic = START;
		mode = 1;
	}

}

void modify_green(void) {
	if (timer1_flag == 1) {
		HAL_GPIO_TogglePin(GPIOA, LED_GREEN1_Pin);
		HAL_GPIO_TogglePin(GPIOA, LED_GREEN2_Pin);
		setTimer1(500);
	}

	auto_update7SEG_green();

	if (is_button_pressed(1)) {
		if (temp >= 1000 && temp <= 99000) {
			temp += 1000;
		}
		if (temp > 99000) {
			temp = 1000;
		}
	}

	if (is_button_pressed(2)) {
		if (temp + counter_yellow >= counter_red) {
			temp = counter_red - counter_yellow;
		}
		counter_green = temp;
		traffic = START;
		mode = 1;
	}

}
