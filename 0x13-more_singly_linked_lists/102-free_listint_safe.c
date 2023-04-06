#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 * @h: Pointer to pointer of first node of listint_t list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lake = 0;
	int difference;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lake++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lake++;
			break;
		}
	}
	*h = NULL;
	return (lake);
}
