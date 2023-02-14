/*
 * transmitter_AVR.c
 *
 * Created: 4/27/2016 12:30:02 PM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 16000000
#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRC &=~(1<<PD0)|(1<<PD3);
	PORTC |=(1<<PD0)|(1<<PD3);
	
	uint16_t UBRR_value = 103;
	UBRRL = (uint8_t)UBRR_value;
	UBRRH = (uint8_t)(UBRR_value>>8);
	UCSRB = (1<<RXEN)|(1<<TXEN);
	UCSRC = (3<<UCSZ0);
	
    while(1)
    {
		if (bit_is_clear(PINC,0))
		{
			while(!(UCSRA &(1<<UDRE)));
			UDR = 'N';
			_delay_ms(1000);
		}
        
		if (bit_is_clear(PINC,3))
		{
			while(!(UCSRA &(1<<UDRE)));
			UDR = 'F';
			_delay_ms(1000);
		}
    }
	
	return 0;
}