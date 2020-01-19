#include "GPIO_REQ7.h"
void sevensegments()
{
	sevenSegInit(SEG_0);
	sevenSegInit(SEG_1);

	unsigned char counter1;
	unsigned char counter2=0;
	while(1)
	{
		for(counter1=0;counter1<=9;counter1++)
		{
			for(int i=0;i<280;i++)
			{
				sevenSegWrite(SEG_0, counter1);
				sevenSegEnable(SEG_0);
				_delay_ms(2);
				sevenSegDisable(SEG_0);
				_delay_ms(2);


				sevenSegWrite(SEG_1, counter2);
				sevenSegEnable(SEG_1);
				_delay_ms(2);
				sevenSegDisable(SEG_1);
				_delay_ms(2);

			}
		}
		counter2++;
		if(counter2==10)
		{
			counter2=0;
		}
	}
}


