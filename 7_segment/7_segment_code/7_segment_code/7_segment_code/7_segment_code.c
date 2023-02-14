/*
 * _7_segment_code.c
 *
 * Created: 4/25/2016 11:51:46 AM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRC = 0b11111111 ;
	
    while(1)
    {
        PORTC = 0b00111111 ;
		_delay_ms(500) ;
		
		PORTC = 0b00000110 ;
		_delay_ms(500) ;
		
		PORTC = 0b01011011 ;
		_delay_ms(500) ;
		
		PORTC = 0b01001111 ;
		_delay_ms(500) ;
		
		PORTC = 0b01100110 ;
		_delay_ms(500) ;
		
		PORTC = 0b01101101 ;
		_delay_ms(500) ;
		
		PORTC = 0b01111101 ;
		_delay_ms(500) ;
		
		PORTC = 0b00000111 ;
		_delay_ms(500) ;
		
		PORTC = 0b01111111 ;
		_delay_ms(500) ;
		
		PORTC = 0b01101111 ;
		_delay_ms(500) ;
    }
	
	return 0 ;
}