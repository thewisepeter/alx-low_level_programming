#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash_table
 * @size: the size of the hash_table array
 *
 * Return: pointer the hash_table array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table[size];

	if (!hash_table)
		return (NULL);
	return (hash_table);
}
