/*
 * receiver_AVR.c
 *
 * Created: 4/27/2016 12:53:32 PM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 16000000
#include <avr/io.h>

int main(void)
{
	DDRC |=(1<<PC0);
	
	uint16_t UBRR_value = 103;
	UBRRL = (uint8_t)UBRR_value;
	UBRRH = (uint8_t)(UBRR_value>>8);
	UCSRB = (1<<RXEN)|(1<<TXEN);
	UCSRC |= (3<<UCSZ0);
	
	char received ;
	
    while(1)
    {
		while(!(UCSRA &(1<<RXC)));
		received = UDR;
		
		if (received == 'N')
		{
			PORTC |=(1<<PC0);
		}
        
		if (received == 'F')
		{
			PORTC &=~(1<<PC0);
		}
    }
	
	return 0;
}