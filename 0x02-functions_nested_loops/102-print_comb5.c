#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
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
				putchar (a + '0');
				putchar (b + '0');
				putchar (':');
				putchar (c + '0');
				putchar (d + '0');
				if (a >= 0 || b >= 0 || c >= 0 || d >= 3)
				{
					if ((a == 2) && (b == 3) && (c == 5) && d == 9)
						continue;
					putchar ('\n');
				}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
