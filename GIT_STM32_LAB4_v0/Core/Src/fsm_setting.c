/*
 * fsm_setting.c
 *
 *  Created on: Dec 2, 2024
 *      Author: Acer
 */

#include "fsm_setting.h"

void InitAll(){
	  statusLed1 = INIT;
	  statusLed2 = INIT;
	  statusMode = INIT_MODE;
	  setTimer(10, 100);
	  setTimer(timerAnimation1, 37);
	  setTimer(timerAnimation2, 27);
}

void Toggle(){
		  if(timer_flag[10] == 1){
			  HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			  setTimer(10, 100);
		  }
}
