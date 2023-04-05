#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at a given position in a
 * listint_t linked list
 * @head: Pointer to the head of the linked list
 * @idx: Index where the new node should be inserted (starting from 0)
 * @n: Value to be assigned to the data (n) of the new node
 *
 * Return: Pointer to the newly added node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{

		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{

		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
