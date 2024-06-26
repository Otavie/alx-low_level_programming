#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index of the list where the new node should be added.
 * Index starts at 0
 * @n: The data to be added to the new node
 *
 * Return: The address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (!current || (i != idx - 1))
	{
		free(new_node);
		return (NULL);
	}

	/* Insert new node at a given position */
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
