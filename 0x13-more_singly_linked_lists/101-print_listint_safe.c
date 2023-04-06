/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)

{
	const listint_t *curr;
	size_t nod;
	const listint_t *hold;

	curr = head;
	if (curr == NULL)
		exit(98);

	nod = 0;
	while (curr != NULL)
	{
		hold = curr;
		curr = curr->next;
		nod++;
		printf("[%p] %d\n", (void *)hold, hold->n);

		if (hold < curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;
		}
	}

	return (nod);
}
