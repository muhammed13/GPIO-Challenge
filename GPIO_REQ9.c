#include "GPIO_REQ9.h"

void trafficlight()
{
	Led_Init(LED_1);
	Led_Init(LED_2);
	Led_Init(LED_3);
	int state=GO;
	while(1)
	{
		switch(state)
		{
			case GO:
				Led_On(LED_1);
				_delay_ms(ONE_SEC);
				Led_Off(LED_1);
				state=3;
				break;
			case READY:
				Led_On(LED_2);
				_delay_ms(ONE_SEC);
				Led_Off(LED_2);
				state=1;
				break;
			case STOP:
				Led_On(LED_3);
				_delay_ms(ONE_SEC);
				Led_Off(LED_3);
				state=2;
				break;
		}

	}
}

