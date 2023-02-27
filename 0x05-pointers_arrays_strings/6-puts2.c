#include "main.h"
/**
 * puts2 - please give me char7
 * Do it accordingly
 * @str: numbers
 * Return: 0
 */
void puts2(char *str)
{
	int man = 0;

	int t = 0;

	char *y = str;

	int o;

	while (*y != '\0')
	{
		y++;
		man++;
	}
	t = man - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
