#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be inspected
 * @index: location of bit we want
 *
 * Return: value of index or -1 (fail)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
