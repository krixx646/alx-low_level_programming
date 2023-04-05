#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: Pointer to the head of the linked list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (next >= current)
		{
			*h = NULL;
			exit(98);
		}
		current = next;
	}
	*h = NULL;

	return (count);
}
