/*
 * internal_pull_up_code.c
 *
 * Created: 4/25/2016 3:03:13 PM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>

int main(void)
{
	DDRA = 0b00000111 ;
	DDRC = 0b00000000 ;
	PORTC = 0b11111111 ;
	
    while(1)
    {
        if (PINC == 0b11111110)
        {
			PORTA = 0b00000001 ;
        } 
        else if (PINC == 0b11111101)
        {
			PORTA = 0b00000011 ;
        }
		else if(PINC == 0b11111011)
		{
			PORTA = 0b00000111 ;
		}
		else
		{
            PORTA = 0b00000000 ;	
		}
    }
	
	return 0 ;
}