#ifndef GPIO_REQ7_H_
#define GPIO_REQ7_H_


#include "led.h"
#include "pushButton.h"
#include "sevenSeg.h"
#include "softwareDelay.h"
#include <util/delay.h>


#ifndef ONE_SEC
#define ONE_SEC 1000
#endif

#ifndef START
#define START 0
#endif

void sevensegments();

#endif /* GPIO_REQ7_H_ */
