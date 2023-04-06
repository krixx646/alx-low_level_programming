#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 * @h: Pointer to pointer of first node of listint_t list
 *
 * Return: The size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
    size_t len = 0;
    int difference;
    listint_t *temp_ptr;

    if (!h || !*h)
        return (0);

    while (*h)
    {
        difference = *h - (*h)->next;
        if (difference > 0)
        {
            temp_ptr = (*h)->next;
            free(*h);
            *h = temp_ptr;
            len++;
        }
        else
        {
            free(*h);
            *h = NULL;
            len++;
            break;
        }
    }

    *h = NULL;
    return (len);
}

