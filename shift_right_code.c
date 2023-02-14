/*
 * shift_left_code.c
 *
 * Created: 4/26/2016 1:39:45 PM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRA = 0xff;
	int8_t counter;
	
    for (counter = 0; counter <= 7; counter++)
    {
		PORTA = (1 << counter);
		_delay_ms(500);
    }
}