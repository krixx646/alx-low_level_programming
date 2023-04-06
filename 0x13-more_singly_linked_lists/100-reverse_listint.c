#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *front = NULL;

	while (*head)
	{
		front = (*head)->front;
		(*head)->front = back;
		back = *head;
		*head = front;
	}
	*head = back;
	return (*head);
}
