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
	const unsigned char *key_1 = (const unsigned char *)key;
	unsigned long int i = key_index(key_1, ht->size);
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);

	if (!key)
	{
		free(node);
		return (0);
	}

	node->key = (char *)key;
	if (!value)
		node->value = NULL;
	node->value = strdup(value);
	node->next = NULL;

	if (ht)
	{
		if (ht->array[i] == NULL)
		{
			ht->array[i] = node;
			return (1);
		}
		else
			node->next = ht->array[i];
		return (1);
	}
	free(node->value);
	free(node);
	return (0);
}
