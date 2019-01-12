#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

void usart_rx_interrupt_enable()
{
	
}

void usart_tx_interrupt_enable()
{

}

void usart_rx_interrupt_disable()
{

}

void usart_tx_interrupt_disable()
{

}

void usart_configure_rx_only(unsigned long int f_cpu, unsigned int baudrate)
{

}

void usart_configure_tx_only(unsigned long int f_cpu, unsigned int baudrate)
{

}

void usart_configure_rx_tx(unsigned long int f_cpu, unsigned int baudrate)
{

}

void usart_write_byte(short val)
{

}

short usart_read_byte()
{

}

void usart_send_buffer(char* buff, short size)
{

}

void usart_send_buffer_endl(char* buff, short size)
{

}

void usart_read_buffer_until(char* buff, char ch)
{

}

void usart_read_buffer_nbytes(char* buff, short len)
{

}

unsigned short usart_data_available()
{

}




