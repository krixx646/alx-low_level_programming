#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - Function to print a listint_t linked list safely
 * Parameters:
 *  @head: Pointer to the head of the linked list
 * Return:
 *   Number of nodes in the list
 * Description:
 *   This function prints the data (n) of each node in the linked list, while
 *   handling cases where the list may have a loop. If the function fails to
 *   print the list due to a loop, it will exit the program with status 98.
 *   The output format is: [address] n, where address is the memory address
 *   of the node and n is the data stored in the node.
 */
size_t print_listint_safe(const listint_t *head) size_t
looped_listint_len(const listint_t *head)
{
	const listint_t *Maize, *har;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	Maize = head->next;
	har = (head->next)->next;
	while (har)
	{
		if (Maize == har)
		{
			Maize = head;
			while (Maize != har)
			{
				nodes++;
				Maize = Maize->next;
				har = har->next;
			}
			Maize = Maize->next;
			while (Maize != har)
			{
				nodes++;
				Maize = Maize->next;
			}
			return (nodes);
		}
		Maize = Maize->next;
		har = (har->next)->next;
	}
	return (0);
}
