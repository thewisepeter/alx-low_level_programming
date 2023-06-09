#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash_table
 * @size: the size of the hash_table array
 *
 * Return: pointer the hash_table array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
