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
	char *value_copy;
	const unsigned char *key_1 = (const unsigned char *)key;
	unsigned long int i = key_index(key_1, ht->size);
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	for (; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(value_copy);
		return (0);
	}
	node->key = strdup(key);
	if (!node->key)
	{
		free(value_copy);
		free(node);
		return (0);
	}
	node->value = value_copy;
	node->next = NULL;

	if (ht->array[i] == NULL)
	{
		ht->array[i] = node;
	}
	else
	{
		node->next = ht->array[i];
		ht->array[i] = node;
	}

	return (1);
}
