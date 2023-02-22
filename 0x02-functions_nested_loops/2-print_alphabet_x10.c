#include "main.h"
/**
 * print_alphabet_x10 - prints lower case only
 * Return: On success 0.
 */
void print_alphabet_x10(void)
{
	char a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
