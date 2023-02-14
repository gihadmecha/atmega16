/*
 * PIR_sensor_code.c
 *
 * Created: 4/30/2016 5:50:57 PM
 *  Author: Gihad M. Radwan
 */ 


#define F_CPU 1000000ul
#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRB = 0b00000100;
    while(1)
    {
        if (bit_is_clear(PINB, 1))
        {
			if (bit_is_set(PINB, 0))
			{
				PORTB |= (1<<PB2);
				_delay_ms(1000);
				PORTB &=~ (1<<PB2);
			}
        }
    }
	
	return 0;
}