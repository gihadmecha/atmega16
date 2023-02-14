/*
 * Blinking_4_Leds_code.c
 *
 * Created: 4/25/2016 10:54:25 AM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRA =0b00001111 ;
	
    while(1)
    {
        PORTA = 0b00000001 ;
        _delay_ms(500)	;
		
		PORTA = 0b00000011 ;
		_delay_ms(500)	;
		
		PORTA = 0b00000111 ;
		_delay_ms(500)	;
		
		PORTA = 0b00001111 ;
		_delay_ms(500)	;
    }
	
	return 0 ;
}