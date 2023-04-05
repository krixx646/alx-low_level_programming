#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 * @h: Pointer to pointer of first node of listint_t list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	while (*h != NULL)
	{
		count++;
		if (*h <= (*h)->next)
		{
			free(*h);
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	return (count);
}
