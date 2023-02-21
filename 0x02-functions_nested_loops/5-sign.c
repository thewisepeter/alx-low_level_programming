#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: number to be examined
 * Return: 1 (positive), -1 (negative), 0 (zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{	_putchar (43);
		return (1);
	}
	if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	if (n == 0)
	{	_putchar (48);
		return (0);
	}
	return (0);
}
