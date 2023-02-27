#include "main.h"
/**
 * _strlen - returns  length
 * @s: string
 * Return: 0;
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
