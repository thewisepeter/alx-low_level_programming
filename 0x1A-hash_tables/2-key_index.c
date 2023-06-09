#include "hash_tables.h"

/**
 * key_index - generates index
 * @key: key to be inserted
 * @size: size of array
 *
 * Return: key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
