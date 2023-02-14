/*
 * H_Bridge_code.c
 *
 * Created: 4/25/2016 4:11:34 PM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRA = 0b00000011 ;
	
    while(1)
    {
        PORTA = 0b00000001 ;
		_delay_ms(5000) ;
		
		PORTA = 0b00000010 ;
		_delay_ms(5000) ;
    }
	
	return 0 ;
}