#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 *
 * @n: Begin from this point
 *
 * Return: Successful.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}