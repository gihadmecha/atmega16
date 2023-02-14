/*
 * inputs_reading_code.c
 *
 * Created: 4/25/2016 2:25:19 PM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>

int main(void)
{
	DDRA = 0b00000100 ;
	
    while(1)
    {
       if (PINB == 0b10000000)
       {
		   PORTA = 0b00000100 ;
       } 
       else
       {
		   PORTA = 0b00000000 ;
       }
    }
	
	return 0 ;
}