#include <stdlib.h>
#include<string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to for
 *
 * Return: The value associated with the element, or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_ *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}
