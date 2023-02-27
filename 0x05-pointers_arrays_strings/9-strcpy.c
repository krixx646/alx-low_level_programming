#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: destination
 * @src: initial location
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;

	int x = 0;

	while (*(src + l) != '\0')
	{
		y++;
	}
	for (; x < y; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
