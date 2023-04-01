#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements.
 * @h: linked list.
 * Return: elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t nelem;

	jack = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		jack++;
	}
	return (jack);
}
