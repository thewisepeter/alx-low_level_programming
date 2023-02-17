#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		/**
		 * writes number  to stdout
		 */
		putchar(n + '0');
		/**
		 * adds comma and space and writes to stdout
		 */
		if (n < 9)
		putchar (',');
		putchar (' ');
	}
	return (0);
}
