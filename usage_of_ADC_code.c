/*
 * usage_of_ADC_code.c
 *
 * Created: 4/28/2016 2:25:01 AM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>
volatile uint16_t ADC_value;

int main(void)
{
	DDRA = 0x00;
	DDRC = 0xff;
	
	ADCSRA |= (1<<ADEN);
	ADCSRA |= (1<<ADPS0)|(1<<ADPS1);
	
	ADMUX |= (1<<ADLAR);
	ADMUX |= (1<<MUX0);
	
    while(1)
    {
     ADCSRA |= (1<<ADSC);
	 
	 while(ADCSRA &(1<<ADSC));
	 
	 ADC_value = ADCH;
	 
	 PORTC = ADC_value;  
    }
	
	return 0;
}