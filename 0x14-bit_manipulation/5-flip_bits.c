#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number to be examined
 * @m: number to be examined
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int temp, xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		temp = xor >> i;
		if (temp & 1)
			count++;
	}
	return (count);
}
