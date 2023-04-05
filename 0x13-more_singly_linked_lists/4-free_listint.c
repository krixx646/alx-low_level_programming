#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head != NULL)
	{
		tempo = head;
		head = head->next;
		free(tempo);
	}
}
