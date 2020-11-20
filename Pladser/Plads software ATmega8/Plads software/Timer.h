/* 
* Timer.h
*
* Created: 04-11-2020 09:44:19
* Author: HansK
*/


#ifndef __TIMER_H__
#define __TIMER_H__
#include <avr/io.h>

class Timer
{
//functions
public:
	Timer();
	void init();
	void start();
	void stop();
	void convertDoubleToUint8_t(volatile double& timerVal, uint8_t& timerValMSB, uint8_t& timerValLSB);
}; //Timer

#endif //__TIMER_H__
