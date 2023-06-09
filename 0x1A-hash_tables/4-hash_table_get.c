#include "hash_tables.h"

/**
 * hash_table_get - gets value of a key
 * @ht: hash table
 * @key: key whose value is needed
 *
 * Return: Value (success) NULL (fail)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	if (current != NULL)
		return (current->value);
	return (NULL);
}
