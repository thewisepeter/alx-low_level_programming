#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	unsigned int count = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (count > 0)
			{
				printf(", ");
			}

			printf("'%s': '%s'", current->key, current->value);
			count++;

			current = current->next;
		}
	}
	printf("}\n");
}
