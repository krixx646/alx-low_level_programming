#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *j;
	listint_t *a;

	j = NULL;
	a = NULL;

	while (*head != NULL)
	{
		a = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = a;
	}

	*head = j;
	return (*head);
}
