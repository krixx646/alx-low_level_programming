#include "lists.h"

/**
 * get_nodeint_at_index - Function to return the nth node of a listint_t linked
 * list
 * @head: Pointer to the head of the linked list
 * @index: Index of the node to retrieve, starting from 0
 *
 * Return: Pointer to the nth node of the linked list, or NULL if the node does
 * not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		return (NULL);
	}

	return (current);
}
