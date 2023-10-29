/*
 * software_timer.c
 *
 *  Created on: Oct 1, 2023
 *      Author: M S I
 */

#include "software_timer.h"

int timer2_counter = 0;
int timer2_flag = 0;

void setTimer2(int duration){
	timer2_counter = duration;
	timer2_flag = 0;
}
void timerRun(){
	if (timer2_counter > 0){
		timer2_counter--;
		if (timer2_counter == 0) {
			timer2_flag = 1;
		}
	}
}
