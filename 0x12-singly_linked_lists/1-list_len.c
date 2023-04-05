#include "lists.h"

/**
 * list_len - number of elements list
 * @h: pointer to structure Available.
 * Return: length.
 */

size_t list_len(const list_t *h)
{

	unsigned int m = 0;

	while (h != NULL)
	{
		m++;
		h = h->next;
	}
	return (m);
}
