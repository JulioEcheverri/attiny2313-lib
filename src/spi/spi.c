#include <inttypes.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#define BYTE_SIZE 8


void spi_master_init()
{
	DDRB |= _BV(USCK) | _BV(DO); //Enable PB5 & PB6 as output pin
	USICR = _BV(USIWM0) | _BV(USICS1) | _BV(USICLK);
}

void spi_write_byte(uint8_t data)
{
	USISR = _BV(USIOIF);
	USIDR = data;
	do
		USICR |= _BV(USITC); // Toggles clock
	while((USISR & (1<<USIOIF)) == 0);
}

uint8_t spi_read_byte()
{
	USISR = _BV(USIOIF);
	USIDR = 0xAA;
	do
		USICR |= _BV(USITC); // Toggles clock
	while((USISR & (1<<USIOIF)) == 0);
	return USIDR;
}


void spi_start_condition_interrupt_enable()
{
	USICR |= _BV(USISIE);
}

void spi_start_condition_interrupt_disable()
{
	USICR &= ~_BV(USISIE);
}
	