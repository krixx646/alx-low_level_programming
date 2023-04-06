/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		new_n = (size_t)tmp_n;
		tmp_n = tmp_n->next;
		counter++;
		if (new_n >= (size_t)tmp_n)
		{
			l_n = tmp_n;
			counter += printf("-> [%p] %d\n", (void *)l_n, l_n->n);
			break;
		}
	}
	return (counter);
}

