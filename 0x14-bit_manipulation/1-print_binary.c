#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal to be converted
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;

		if (temp & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
	_putchar('0');
}
