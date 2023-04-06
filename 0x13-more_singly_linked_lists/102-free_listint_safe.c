#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t len = 0;

	if (!h || !*h)
		return (0);

	current = *h;
	while (current)
	{
		len++;
		tmp = current;
		current = current->next;
		free(tmp);
		if (tmp <= current)
			break;
	}

	*h = NULL;

	return (len);
}
