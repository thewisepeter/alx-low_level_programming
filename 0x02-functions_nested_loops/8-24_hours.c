#include "main.h"

/**
 * jack_bauer  - entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	/**
	 * declarations
	 */
	int a, b, c, d;

	for (a = 0 ; a < 3 ; a++)
	{
		for (b = 0 ; b < 4 ; b++)
		{
			for (c = 0 ; c < 6 ; c++)
			{
				for (d = 0 ; d < 10 ; d++)
				{
				_putchar (a + '0');
				_putchar (b + '0');
				_putchar (':');
				_putchar (c + '0');
				_putchar (d + '0');
				if (a >= 0 || b >= 0 || c >= 0 || d >= 3)
				{
					if ((a == 2) && (b == 3) && (c == 5) && d == 9)
						continue;
					_putchar ('\n');
				}
				}
			}
		}
	}
	_putchar ('\n');
}
