#include <stdio.h>
#include "lists.h"

/**
 * * print_list - Prints all the elements of a list_t list
 *
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str != NULL)
			printf("%s", h->str);
		else
			printf("(nil)");
		printf("\n");
		h = h->next;
	}

	return (count);
}
