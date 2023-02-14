/*
 * counter_0_225_code.c
 *
 * Created: 4/26/2016 3:00:34 AM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
    
    
        DDRA = 0b11111111 ;
		int8_t counter ;
		
		for (counter = 0; counter <= 255; counter++)
		{
			PORTA = counter ;
			_delay_ms(500) ;
		}
    
	
	return 0;
}