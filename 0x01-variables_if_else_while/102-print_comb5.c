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
	int a, b;

	for (a = 0 ; a < 100 ; a++)
	{
		for (b = a + 1 ; b < 10 ; b++)
		{
			if (i < j)
			{
				putchar ((a / 10) + '0');
				putchar ((a % 10) + '0');
				putchar (' ');
				putchar ((b / 10) + '0');
				putchar ((b % 10) + '0');

				if (a != 98 || b != 99)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
