#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail7
 *
 */
#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	char *s;
	int j;

	s = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < (int)size)
	{
		s[j] = c;
		j++;
	}
	return (s);
}
