#include "main.h"
/**
 * print_rev - print identity in reverse
 * @s: print strings7
 * return: 0
 */
void print_rev(char *s)
{
	int get = 0;

	int o;

	while (*s != '\0')
	{
		get++;
		s++;
	}
	s--;
	for (o = get; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
