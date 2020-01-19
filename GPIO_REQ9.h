#ifndef GPIO_REQ9_H_
#define GPIO_REQ9_H_


#include "led.h"
#include "softwareDelay.h"
#include <util/delay.h>

#ifndef ONE_SEC
#define ONE_SEC 1000
#endif

#ifndef START
#define START 0
#endif

typedef enum STATE
{
	GO=1,
	READY=2,
	STOP=3,
}STATE;

void trafficlight();

#endif /* GPIO_REQ7_H_ */
