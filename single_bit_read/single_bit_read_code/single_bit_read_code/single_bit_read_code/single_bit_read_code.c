/*
 * single_bit_read_code.c
 *
 * Created: 4/26/2016 3:29:57 PM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>

int main(void)
{
	DDRA |=(1<<PA0);
	DDRB &=~(1<<PB0);
	
	
	if (PINB &(1<<PB0))                               
		PORTA = 0b00000001;
	}/*else{                                                 
		PORTA &=~(1<<PA0);
	     }*/
		 
		 return 0;
  }