#include "hash_tables.h"

/**
 * hash_table_set - sets key in hash table
 * @ht: hash table
 * @key: key to be inserted
 * @value: value of key
 *
 * Return: 1 (success) 0 (fail)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = key_index(key, ht->size);

	if (!key)
		return (0);

	hash_node_t node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);
	node->key = key;
	if (!value)
		node->value = NULL;
	node->value = strdup(value);
	node->next = NULL;

	if (ht)
	{
		if (ht->array[i] == NULL)
			ht->array[i] = node;
		return (1);
		else
			node->next = ht->array[i];
		return (1);
	}
	free(node->value)
	free(node);
	return (0);
}
