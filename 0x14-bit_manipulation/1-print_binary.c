#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary equivalent of a decimal number and do it
 * without error
 * @n: number to be printed in binary
 */

#include <stdio.h>

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bit;

	while (mask > 0)
	{
		bit = (n & mask) ? 1 : 0;
		_putchar(bit + '0');
		mask >>= 1;
	}
}
