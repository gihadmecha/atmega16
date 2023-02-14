/*
 * single_bit_code.c
 *
 * Created: 4/26/2016 2:06:15 PM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{	
	DDRA |=(1<<PA0);
	
    while(1)
    {
		PORTA |=(1<<PA0);
		_delay_ms(500);
        
		PORTA &=~(1<<PA0);
		_delay_ms(500);
    }
	
	return 0;
}