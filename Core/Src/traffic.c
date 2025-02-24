/*
 * traffic.c
 *
 *  Created on: Oct 25, 2024
 *      Author: Onii-Chan
 */

/*
 * traffic.c
 *
 *  Created on: Oct 24, 2024
 *      Author: Onii-Chan
 */

#include "traffic.h"

int mode = 1;
int temp = 0;
void fsm_mode(void) {
	if (is_button_pressed(0)) {
		HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_RED2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN2_Pin, RESET);
		if (mode >=1 && mode <= 4) {
			mode++;
		}
		if (mode > 4) {
			mode = 1;
			traffic = START;
		}
		setTimer1(10);
		temp = 0;
	}
	switch (mode) {
	case 1:
		fsm_traffic_light();
		break;

	case 2:

		if (temp == 0) temp = counter_red;

		modify_red();
		if (counter_red == temp) temp = 0;
		break;

	case 3:
		if (temp == 0) temp = counter_yellow;
		modify_yellow();
		if (counter_yellow == temp) temp = 0;
		break;

	case 4:
		if (temp == 0) temp = counter_green;
		modify_green();
		if (counter_green == temp) temp = 0;
		break;

	default:
		break;
	}
}


int counter0 = 0;
int counter1 = 0;
void fsm_traffic_light(void) {

	switch (traffic) {
	case START:
		HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_RED2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN2_Pin, RESET);
		setTimer0(counter_red);
		setTimer2(counter_green);
		setTimer7Led();
		traffic = RED_GREEN;
		counter0 = counter_red / TIMER_CYCLE;
		counter1 = counter_green / TIMER_CYCLE;
		break;
	case RED_GREEN:
		HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, SET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN2_Pin, SET);

		auto_update7SEG();
		//Check yellow
		if (timer2_flag == 1) {
			traffic = RED_YELLOW;
			//Turn off green 2
			HAL_GPIO_WritePin(GPIOA, LED_GREEN2_Pin, RESET);
			setTimer2(counter_yellow);

			counter1 = counter_yellow / TIMER_CYCLE;
		}
		break;

	case RED_YELLOW:
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW2_Pin, SET);

		auto_update7SEG();

		if (timer2_flag == 1) {
			//Check green red
			if (timer0_flag == 1) {
				setTimer0(counter_green);
				setTimer2(counter_red);
				//Turn off red1 and yellow2
				HAL_GPIO_WritePin(GPIOA, LED_YELLOW2_Pin, RESET);
				HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, RESET);
				traffic = GREEN_RED;

				counter0 = counter_green / TIMER_CYCLE;
				counter1 = counter_red / TIMER_CYCLE;
			}
			//check red red
			else {
				setTimer2(counter_red);

				HAL_GPIO_WritePin(GPIOA, LED_YELLOW2_Pin, RESET);
				traffic = RED_RED;

				counter1 = counter_red / TIMER_CYCLE;
			}
		}
		break;

	case RED_RED:
		HAL_GPIO_WritePin(GPIOA, LED_RED2_Pin, SET);

		auto_update7SEG();

		if (timer0_flag == 1) {
			setTimer0(counter_green);

			HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, RESET);
			traffic = GREEN_RED;

			counter0 = counter_green / TIMER_CYCLE;
		}
		break;

	case GREEN_RED:
		HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin, SET);
		HAL_GPIO_WritePin(GPIOA, LED_RED2_Pin, SET);

		auto_update7SEG();

		if (timer0_flag == 1) {
			setTimer0(counter_yellow);

			HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin, RESET);
			traffic = YELLOW_RED;

			counter0 = counter_yellow /TIMER_CYCLE;
		}

		break;

	case YELLOW_RED:
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, SET);

		auto_update7SEG();

		if (timer0_flag == 1) {

			if (timer2_flag == 1) {
				HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, RESET);
				HAL_GPIO_WritePin(GPIOA, LED_RED2_Pin, RESET);

				setTimer0(counter_red);
				setTimer2(counter_green);
				traffic = RED_GREEN;

				counter0 = counter_red /TIMER_CYCLE;
				counter1 = counter_green /TIMER_CYCLE;
			}

			else {
				HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, RESET);

				setTimer0(counter_red);
				traffic = RED_RED2;

				counter0 = counter_red / TIMER_CYCLE;
			}
		}
		break;

	case RED_RED2:
		HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, SET);

		auto_update7SEG();

		if (timer2_flag == 1) {
			setTimer2(counter_green);

			HAL_GPIO_WritePin(GPIOA, LED_RED2_Pin, RESET);
			traffic = RED_GREEN;

			counter1 = counter_green /TIMER_CYCLE;
		}
		break;

	default:
		break;
	}
}

