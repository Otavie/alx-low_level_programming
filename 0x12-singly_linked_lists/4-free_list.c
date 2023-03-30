#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 *
 * @head: Pointer to the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
