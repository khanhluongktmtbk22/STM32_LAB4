/*
 * testled.c
 *
 *  Created on: Nov 29, 2024
 *      Author: Acer
 */
#include "testled.h"

void ledRed(){
//	  if(timer_flag[7] == 1){
//			HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
//		  setTimer(7, 100);
//	  }
	HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
}
void ledYellow(){
//	  if(timer_flag[8] == 1){
//			HAL_GPIO_TogglePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin);
//		  setTimer(8, 100);
//	  }
	HAL_GPIO_TogglePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin);
}
void ledGreen(){
//	  if(timer_flag[9] == 1){
//			HAL_GPIO_TogglePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin);
//		  setTimer(9, 100);
//	  }
	HAL_GPIO_TogglePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin);
}




