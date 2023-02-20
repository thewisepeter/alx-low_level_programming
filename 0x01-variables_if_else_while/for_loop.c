#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 * Declarations
	 */
	int b, c;

	for (b = 0 ; b < 10 ; b++)
	{
		for (c = b + 1 ; c < 10 ; c++)
		{
			putchar(b + '0');
			putchar(c + '0');
		if ((b >= 0) || (c >= 1))
		{
			if ((b == 8) && (c == 9))
				continue;
			putchar (',');
			putchar (' ');
		}
		}
	}
	putchar ('\n');
	return (0);
}
