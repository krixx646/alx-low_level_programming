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
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		/* Check for loop */
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}

	/* Print the last node if it exists */
	if (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}

	return (count);
}
