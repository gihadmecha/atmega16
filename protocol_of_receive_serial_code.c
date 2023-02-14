/*
 * protocol_of_receive_serial_code.c
 *
 * Created: 4/27/2016 10:27:43 AM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 16000000
#include <avr/io.h>

int main(void)
{
	uint16_t UBRR_value = 103;
	UBRRL = (uint8_t)UBRR_value;
	UBRRH =(uint8_t)(UBRR_value>>8);
	UCSRB = (1<<RXEN)|(1<<TXEN);
	UCSRC |= (3<<UCSZ0);
	
    while(1)
    {
       while(!(UCSRA &(1<<RXC)));
	   PORTC = UDR ;
    }
	
	return 0;
}