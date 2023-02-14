/*
 * LCD_code.c
 *
 * Created: 5/1/2016 5:08:55 AM
 *  Author: Gihad M. Radwan
 */ 


#define  F_CPU 1000000ul
#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"
void main()
{
	unsigned char i;

	//Initialize LCD module
	LCDInit(LS_BLINK|LS_ULINE);

	//Clear the screen
	LCDClear();

	//Simple string printing
	LCDWriteString("Congrats ");

	//A string on line 2
	LCDWriteStringXY(0,1,"Loading ");

	//Print some numbers
	for (i=0;i<99;i+=1)
	{
		LCDWriteIntXY(9,1,i,3);
		LCDWriteStringXY(12,1,"%");
		_delay_loop_2(0);
		//_delay_loop_2(0);
		//_delay_loop_2(0);
		//_delay_loop_2(0);

	}

	//Clear the screen
	LCDClear();

	//Some more text

	LCDWriteString("Hello world");
	LCDWriteStringXY(0,1,"Gihad");    

	//Wait
	for(i=0;i<50;i++) _delay_loop_2(0);

	//Some More ......
	LCDClear();
	LCDWriteString("    eXtreme");
	LCDWriteStringXY(0,1,"  Electronics");

}
