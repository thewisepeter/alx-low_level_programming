#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash_table
 * @size: the size of the hash_table array
 *
 * Return: pointer the hash_table array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = NULL;

	return (hash_table);
}
