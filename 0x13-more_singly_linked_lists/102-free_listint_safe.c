/**
 * free_listint_safe - Frees a listint_t list safely (i.e., it can free lists
 * containing loops)
 * @h: A pointer to the address of the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp;

	while (*h != NULL)
	{
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		count++;
		if (tmp <= *h)
			break;
	}

	*h = NULL;

	return (count);
}
