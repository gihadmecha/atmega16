/*
 * interrupt_concept_code.c
 *
 * Created: 4/26/2016 4:53:40 PM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>
#include <avr/delay.h>
#include <avr/interrupt.h>

int main(void)
{
	DDRA |=(1<<PA0);
	DDRB |=(1<<PB0);
	
	DDRD &=~(1<<PD2);
	PORTD |=(1<<PD2);
	
	MCUCR |=(1<<ISC01);
	GICR |=(1<<INT0);
	
	sei();
	
    while(1)
    {
        PORTA |=(1<<PA0);
		_delay_ms(500);
		
		PORTA &=~(1<<PA0);
		_delay_ms(500);
    }
	
	return 0;
}

ISR (INT0_vect)
{
	PORTB ^=(1<<PB0);
}