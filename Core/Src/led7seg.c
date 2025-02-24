/*
 * led7seg.c
 *
 *  Created on: Oct 25, 2024
 *      Author: Onii-Chan
 */

/*
 * led7seg.c
 *
 *  Created on: Oct 24, 2024
 *      Author: Onii-Chan
 */
#include "led7seg.h"

void display7SEG (int num) {
  switch (num) {
	case 0:
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, SET);
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, RESET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, SET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, SET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, SET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, SET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, SET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, SET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, SET);
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, SET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, SET);
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, SET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, SET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, SET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, SET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, SET);
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, SET);
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, SET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, SET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, SET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, SET);
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, SET);
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		break;
	default:
		break;
  }
}

void display7SEGM (int num) {
  switch (num) {
	case 0:
		HAL_GPIO_WritePin(MSEGG_GPIO_Port, MSEGG_Pin, SET);
		HAL_GPIO_WritePin(MSEGA_GPIO_Port, MSEGA_Pin, RESET);
		HAL_GPIO_WritePin(MSEGB_GPIO_Port, MSEGB_Pin, RESET);
		HAL_GPIO_WritePin(MSEGC_GPIO_Port, MSEGC_Pin, RESET);
		HAL_GPIO_WritePin(MSEGD_GPIO_Port, MSEGD_Pin, RESET);
		HAL_GPIO_WritePin(MSEGE_GPIO_Port, MSEGE_Pin, RESET);
		HAL_GPIO_WritePin(MSEGF_GPIO_Port, MSEGF_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(MSEGA_GPIO_Port, MSEGA_Pin, SET);
		HAL_GPIO_WritePin(MSEGF_GPIO_Port, MSEGF_Pin, SET);
		HAL_GPIO_WritePin(MSEGE_GPIO_Port, MSEGE_Pin, SET);
		HAL_GPIO_WritePin(MSEGD_GPIO_Port, MSEGD_Pin, SET);
		HAL_GPIO_WritePin(MSEGG_GPIO_Port, MSEGG_Pin, SET);
		HAL_GPIO_WritePin(MSEGB_GPIO_Port, MSEGB_Pin, RESET);
		HAL_GPIO_WritePin(MSEGC_GPIO_Port, MSEGC_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(MSEGF_GPIO_Port, MSEGF_Pin, SET);
		HAL_GPIO_WritePin(MSEGC_GPIO_Port, MSEGC_Pin, SET);
		HAL_GPIO_WritePin(MSEGA_GPIO_Port, MSEGA_Pin, RESET);
		HAL_GPIO_WritePin(MSEGB_GPIO_Port, MSEGB_Pin, RESET);
		HAL_GPIO_WritePin(MSEGG_GPIO_Port, MSEGG_Pin, RESET);
		HAL_GPIO_WritePin(MSEGE_GPIO_Port, MSEGE_Pin, RESET);
		HAL_GPIO_WritePin(MSEGD_GPIO_Port, MSEGD_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(MSEGF_GPIO_Port, MSEGF_Pin, SET);
		HAL_GPIO_WritePin(MSEGE_GPIO_Port, MSEGE_Pin, SET);
		HAL_GPIO_WritePin(MSEGA_GPIO_Port, MSEGA_Pin, RESET);
		HAL_GPIO_WritePin(MSEGB_GPIO_Port, MSEGB_Pin, RESET);
		HAL_GPIO_WritePin(MSEGG_GPIO_Port, MSEGG_Pin, RESET);
		HAL_GPIO_WritePin(MSEGC_GPIO_Port, MSEGC_Pin, RESET);
		HAL_GPIO_WritePin(MSEGD_GPIO_Port, MSEGD_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(MSEGA_GPIO_Port, MSEGA_Pin, SET);
		HAL_GPIO_WritePin(MSEGE_GPIO_Port, MSEGE_Pin, SET);
		HAL_GPIO_WritePin(MSEGD_GPIO_Port, MSEGD_Pin, SET);
		HAL_GPIO_WritePin(MSEGF_GPIO_Port, MSEGF_Pin, RESET);
		HAL_GPIO_WritePin(MSEGB_GPIO_Port, MSEGB_Pin, RESET);
		HAL_GPIO_WritePin(MSEGG_GPIO_Port, MSEGG_Pin, RESET);
		HAL_GPIO_WritePin(MSEGC_GPIO_Port, MSEGC_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(MSEGB_GPIO_Port, MSEGB_Pin, SET);
		HAL_GPIO_WritePin(MSEGE_GPIO_Port, MSEGE_Pin, SET);
		HAL_GPIO_WritePin(MSEGA_GPIO_Port, MSEGA_Pin, RESET);
		HAL_GPIO_WritePin(MSEGF_GPIO_Port, MSEGF_Pin, RESET);
		HAL_GPIO_WritePin(MSEGG_GPIO_Port, MSEGG_Pin, RESET);
		HAL_GPIO_WritePin(MSEGC_GPIO_Port, MSEGC_Pin, RESET);
		HAL_GPIO_WritePin(MSEGD_GPIO_Port, MSEGD_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(MSEGB_GPIO_Port, MSEGB_Pin, SET);
		HAL_GPIO_WritePin(MSEGA_GPIO_Port, MSEGA_Pin, RESET);
		HAL_GPIO_WritePin(MSEGF_GPIO_Port, MSEGF_Pin, RESET);
		HAL_GPIO_WritePin(MSEGG_GPIO_Port, MSEGG_Pin, RESET);
		HAL_GPIO_WritePin(MSEGE_GPIO_Port, MSEGE_Pin, RESET);
		HAL_GPIO_WritePin(MSEGC_GPIO_Port, MSEGC_Pin, RESET);
		HAL_GPIO_WritePin(MSEGD_GPIO_Port, MSEGD_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(MSEGF_GPIO_Port, MSEGF_Pin, SET);
		HAL_GPIO_WritePin(MSEGG_GPIO_Port, MSEGG_Pin, SET);
		HAL_GPIO_WritePin(MSEGE_GPIO_Port, MSEGE_Pin, SET);
		HAL_GPIO_WritePin(MSEGD_GPIO_Port, MSEGD_Pin, SET);
		HAL_GPIO_WritePin(MSEGA_GPIO_Port, MSEGA_Pin, RESET);
		HAL_GPIO_WritePin(MSEGB_GPIO_Port, MSEGB_Pin, RESET);
		HAL_GPIO_WritePin(MSEGC_GPIO_Port, MSEGC_Pin, RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(MSEGA_GPIO_Port, MSEGA_Pin, RESET);
		HAL_GPIO_WritePin(MSEGB_GPIO_Port, MSEGB_Pin, RESET);
		HAL_GPIO_WritePin(MSEGC_GPIO_Port, MSEGC_Pin, RESET);
		HAL_GPIO_WritePin(MSEGF_GPIO_Port, MSEGF_Pin, RESET);
		HAL_GPIO_WritePin(MSEGG_GPIO_Port, MSEGG_Pin, RESET);
		HAL_GPIO_WritePin(MSEGE_GPIO_Port, MSEGE_Pin, RESET);
		HAL_GPIO_WritePin(MSEGD_GPIO_Port, MSEGD_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(MSEGE_GPIO_Port, MSEGE_Pin, SET);
		HAL_GPIO_WritePin(MSEGA_GPIO_Port, MSEGA_Pin, RESET);
		HAL_GPIO_WritePin(MSEGB_GPIO_Port, MSEGB_Pin, RESET);
		HAL_GPIO_WritePin(MSEGC_GPIO_Port, MSEGC_Pin, RESET);
		HAL_GPIO_WritePin(MSEGF_GPIO_Port, MSEGF_Pin, RESET);
		HAL_GPIO_WritePin(MSEGG_GPIO_Port, MSEGG_Pin, RESET);
		HAL_GPIO_WritePin(MSEGD_GPIO_Port, MSEGD_Pin, RESET);
		break;
	default:
		break;
  }
}

int led_index = 0;
int led_indexM = 0;
int led_buffer[2] = {0, 0};
int led_bufferM[2] = {0, 0};
void auto_update7SEG(void) {
	if (timer7_flag == 1) {
		led_buffer[0] = (counter0 / 100) / 10;
		led_buffer[1] = (counter0 / 100) % 10;
		led_bufferM[0] = (counter1 / 100 ) / 10;
		led_bufferM[1] = (counter1 / 100) % 10;

		update7SEG(led_index);
		update7SEGM(led_indexM);
		led_index = (led_index + 1) % 2;
		led_indexM = (led_indexM + 1) % 2;
		setTimer7Led();
	}
}

void auto_update7SEG_red(void) {
	if (timer7_flag == 1) {
		led_buffer[0] = (temp / 1000) / 10;
		led_buffer[1] = (temp / 1000) % 10;
		led_bufferM[0] = 0;
		led_bufferM[1] = 2;

		update7SEG(led_index);
		update7SEGM(led_indexM);
		led_index = (led_index + 1) % 2;
		led_indexM = (led_indexM + 1) % 2;
		setTimer7Led();
	}
}

void auto_update7SEG_yellow(void) {
	if (timer7_flag == 1) {
		led_buffer[0] = (temp / 1000) / 10;
		led_buffer[1] = (temp / 1000) % 10;
		led_bufferM[0] = 0;
		led_bufferM[1] = 3;

		update7SEG(led_index);
		update7SEGM(led_indexM);
		led_index = (led_index + 1) % 2;
		led_indexM = (led_indexM + 1) % 2;
		setTimer7Led();
	}
}

void auto_update7SEG_green(void) {
	if (timer7_flag == 1) {
		led_buffer[0] = (temp / 1000) / 10;
		led_buffer[1] = (temp / 1000) % 10;
		led_bufferM[0] = 0;
		led_bufferM[1] = 4;

		update7SEG(led_index);
		update7SEGM(led_indexM);
		led_index = (led_index + 1) % 2;
		led_indexM = (led_indexM + 1) % 2;
		setTimer7Led();
	}
}

void update7SEG (int index) {
	switch (index){
	case 0:
		display7SEG(led_buffer[0]);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		break;
	case 1:
		display7SEG(led_buffer[1]);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		break;
	default:
		break;
	}
}

void update7SEGM(int index) {
	switch (index) {
	case 0:
		display7SEGM(led_bufferM[0]);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		break;
	case 1:
		display7SEGM(led_bufferM[1]);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		break;
	default:
		break;
	}
}

