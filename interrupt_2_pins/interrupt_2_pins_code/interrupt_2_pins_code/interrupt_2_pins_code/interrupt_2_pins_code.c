/*
 * interrupt_2_pins_code.c
 *
 * Created: 4/26/2016 6:10:43 PM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>
#include <avr/interrupt.h>

int main(void)
{
	DDRA |=(1<<PA0);
	DDRA |=(1<<PA6);
	DDRB |=(1<<PB3);
	
	DDRD &=~(1<<PD2)|(1<<PD3);
	PORTD |=(1<<PD2)|(1<<PD3);
	
	
	MCUCR |=(1<<ISC01)|(1<<ISC11);
	
	GICR |=(1<<INT0)|(1<<INT1);
	
	
	sei();
    while(1)
    {
        PORTA |=(1<<PA0);
    }
	
	return 0;
}

ISR(INT0_vect)
{
	PORTA |=(1<<PA6);
}

ISR(INT1_vect)
{
	PORTB |=(1<<PB3);
}