#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Function that return the sum of all data in a dlist
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data (n) of the dlistint_t.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
