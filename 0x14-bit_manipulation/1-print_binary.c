#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary equivalent of a decimal number and do it
 * without error
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int krixx, number = 0;
	unsigned long int now;

	for (krixx = 63; krixx >= 0; krixx--)
	{
		now = n >> krixx;

		if (now & 1)
		{
			_putchar('1');
			number++;
		}
		else if (number)
		{
			_putchar('0');
		}
	}

	if (!number)
	{
		_putchar('0');
	}
}
