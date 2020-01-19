#include "GPIO_REQ8.h"

void button_led(void)
{
	unsigned char count=START+1;
	Led_Init(LED_1);
	pushButtonInit(BTN_1);
	while(1)
	{
		if(pushButtonGetStatus(BTN_1))
		{
			_delay_ms(200);
			if(pushButtonGetStatus(BTN_1))
			{
				count++;
				Led_On(LED_1);
				_delay_ms(ONE_SEC*(count));
				Led_Off(LED_1);
			}
			else
			{
				Led_On(LED_1);
				_delay_ms(ONE_SEC);
				Led_Off(LED_1);
				count=START+1;
			}
		}
	}
}


