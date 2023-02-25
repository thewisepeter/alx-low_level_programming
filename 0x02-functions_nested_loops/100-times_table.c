#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: number input
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n <= 15 && n >= 0)
	{
		for (i = 0 ; i < n + 1 ; i++)
		{
			_putchar('0');
			for (j = 1 ; j < n + 1 ; j++)
			{
				_putchar(',');
				_putchar(' ');
				p = i * j;

				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');
				if (p >= 100)
				{
					_putchar((p / 100) * '0');
					_putchar(((p / 10)) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
