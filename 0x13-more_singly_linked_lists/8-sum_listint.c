#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data
 *
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all the data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	sum = 0;
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
