/*
 * automatic.c
 *
 *  Created on: 23 Sep 2024
 *      Author: Admin
 */


#include "automatic.h"

void init_automatic();


void automatic_run(){
	switch(status){
	case INIT:
		if(1){
			status = GREEN_RED;
			setTimer(0, 300);
		}
		break;
	case GREEN_RED:
		if(timer_flag[0] == 0){

		}
		if(timer_flag[0] == 1){

		}
		break;

	default:
		break;
	}
}
