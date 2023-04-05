#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of linked list.
 * @str: string to store .
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tempo;
	size_t moto;
		new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (moto = 0; str[moto]; moto++)
		;
	new->len = moto;
	new->next = NULL;
	tempo = *head;

	if (tempo == NULL)
	{
		*head = new;
	}
	else
	{
		while (tempo->next != NULL)
			tempo = tempo->next;
		tempo->next = new;
	}
	return (*head);
}
