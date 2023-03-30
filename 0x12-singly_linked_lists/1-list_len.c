#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 *
 * @h: Pointer to the head the linked list
 *
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
