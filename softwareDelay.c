
#include "softwareDelay.h"

/**
 * Description: this delay function operate in a polling manner
 * 				don't use it with RTOSs
 * @param a_delay_in_ms: the milli-seconds
 */
//void softwareDelayMs(uint32_t u32_delay_in_ms){
	//int counter = 0 ;
		/* clock cycle time  = 1/ FCPU
			1 / 8000 000 = 0.125us
	 4	INTRUCTIONS inside the loop  TAKE .500us
			*/
/*
	uint8_t NumOfCounts = u32_delay_in_ms / ( 4 *( 1 / 8000000));


	for(counter ; counter < NumOfCounts ; counter++){ // takes two clock cycle
		asm("NOP"); // takes one clock cycle
		asm("NOP");
	}

}
*/
