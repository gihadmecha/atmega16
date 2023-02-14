/*
 * Blinking_Led_code.c
 *
 * Created: 4/25/2016 10:10:21 AM
 *  Author: Gihad M. Radwan
 */ 


#define F_cpu 1000000ul
#include <avr/io.h>
#include <avr/delay.h>


int main(void)
{
	DDRA = 0b00000001 ;
	
    while(1)
    {
       PORTA = 0b00000001 ;
	   _delay_ms(1000) ;
	   
	   PORTA = 0b00000000 ;
	   _delay_ms(1000) ;
    }
	
	return 0 ;
}