#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t link list
 *
 * @head: Pointer to the head of the list
 * @index: Index of the node
 *
 * Return: Pointer to the nth node or NULL if it does not exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}
