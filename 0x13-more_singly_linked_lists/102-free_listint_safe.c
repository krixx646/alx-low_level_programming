/**
 * free_listint_safe - Frees a listint_t list
 * @h: A pointer to the address of the head of the list
 *
 * Return: The size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)

{
	size_t count = 0;
	int gap;

	listint_t *next_node;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		gap = *head - (*h)->next;
		if (gap > 0)
		{
			next_node = (*h)->next;
			free(*h);
			*h = next_node;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
