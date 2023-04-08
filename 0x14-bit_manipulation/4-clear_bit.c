#include "main.h"

/**
 *  clear_bit - sets value at index to 0
 * @n: number to modify
 * @index: location of bit to modify
 *
 * Return: 1 (success) -1 (fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1UL << index;
	*n &= ~mask;

	return (1);

}
