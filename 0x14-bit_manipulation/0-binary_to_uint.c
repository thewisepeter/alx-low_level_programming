#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted bin number or 0 (fail)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, len = 0, i, p;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	for (i = 0; b[i] != 0; i++)
	{
		p = (b[i] - '0');
		if (p >= 2)
		{
			return (0);
		}
		else
		{
			sum += (p * (1 << (len - 1)));
			len--;
		}
	}
	return (sum);
}
