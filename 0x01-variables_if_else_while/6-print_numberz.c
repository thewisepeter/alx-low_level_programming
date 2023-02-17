#include <stdio.h>

/**
 * main - Prints all single digit numbers from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		/**
		 * writes result to stdout
		 */
		if (n < 10)
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
