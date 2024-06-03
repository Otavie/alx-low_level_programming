/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size == 0)
		return (NULL);

	hash_table = calloc(1, sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;

	hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);
}
