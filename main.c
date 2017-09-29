/*
 * GSM-INT.c
 *
 * Created: 9/27/2017 11:30:05 AM
 * Author : madiv
 */ 
#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

ISR(PCINT0_vect)
{
		PINB |= (1<<PINB1);	
}

int main(void)
{
	DDRB |= (1<<DDB1); //set PORTB1 as output
	
	PCMSK0 |= (1<<PCINT0);
	PCICR |= (1<<PCIE0);
	
 	sei(); //Enable global interrupts by setting the SREG's I-bit
	while (1)
	{
	}

}

