#include "main.h"

/**
 * _islower - check if character is lowercase.
 * @c: character checker
 * Return: 0 - true, 1 - false.
 */
int _islower(int c)
{
	int j;

	if (j >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
