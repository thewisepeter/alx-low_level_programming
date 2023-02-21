#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet lowercase 10x
 *
 * Result: void
 */
void print_alphabet_x10(void)
{
	char pz;
	int n;

	n = 0;

	while (n < 10)
	{
		for (pz = 'a' ; pz <= 'z' ; pz++)
		{
			_putchar (pz);
		}
		_putchar ('\n');
		n++;
	}
}
