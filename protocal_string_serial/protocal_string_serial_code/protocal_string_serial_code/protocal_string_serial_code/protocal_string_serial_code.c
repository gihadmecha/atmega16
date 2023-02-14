/*
 * protocal_string_serial_code.c
 *
 * Created: 4/27/2016 1:41:13 PM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 16000000ul
#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	uint16_t UBBR_value = 103;
	UBRRL = (uint8_t)UBBR_value;
	UBRRH = (uint8_t)(UBBR_value>>8);
	UCSRB = (1<<RXEN)|(1<<TXEN);
	UCSRC |= (3<<UCSZ0);
	
	

    while(1)
    {
		char *word = "UART";
		while(*word > 0)
		{
			
			while(!(UCSRA &(1<<UDRE)));
			UDR = *word++;
		}
        
		_delay_ms(1000);
    }
	
	return 0;
}