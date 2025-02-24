/*
 * input_reading.c
 *
 *  Created on: Oct 25, 2024
 *      Author: Onii-Chan
 */

#include "input_reading.h"
#define BUTTON_RELEASED GPIO_PIN_SET
#define BUTTON_PRESSED GPIO_PIN_RESET

int button_flags[NO_OF_BUTTONS] = {0, 0, 0};
int timers_key_pressed[NO_OF_BUTTONS] = {100, 100, 100};

int KeyReg0[NO_OF_BUTTONS];
int KeyReg1[NO_OF_BUTTONS];
int KeyReg2[NO_OF_BUTTONS];
int KeyReg3[NO_OF_BUTTONS];

GPIO_TypeDef* buttons_port[NO_OF_BUTTONS] = {BUTTON1_GPIO_Port, BUTTON2_GPIO_Port, BUTTON3_GPIO_Port};
uint16_t buttons[NO_OF_BUTTONS] = {BUTTON1_Pin, BUTTON2_Pin, BUTTON3_Pin};


void button_reading(){
	for(int i = 0; i < NO_OF_BUTTONS; i++){
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
		KeyReg0[i] = HAL_GPIO_ReadPin(buttons_port[i], buttons[i]);

		if((KeyReg2[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg0[i])){
			if(KeyReg3[i] != KeyReg2[i]){
				KeyReg3[i] = KeyReg2[i];
				if(KeyReg2[i] == BUTTON_PRESSED){
					button_flags[i] = 1;
					timers_key_pressed[i] = 100;
				}
			}else{
				timers_key_pressed[i]--;
				if(timers_key_pressed[i] <= 0){
					if(KeyReg2[i] == BUTTON_PRESSED){
						button_flags[i] = 1;
					}
					timers_key_pressed[i] = 100;
				}
			}
		}
	}
}

int is_button_pressed(int index){
	if(button_flags[index] == 1){
		button_flags[index] = 0;
		return 1;
	}
	return 0;
}

