#include <stdio.h>

/**
 * main - Prints all hexadicimal numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	n = 0;
	while (n < 10)
	{
		/**
		 * writes numeric result to stdout
		 */
		if (n < 10)
		putchar(n + '0');
		n++;
	}
	/**
	 * writes alphabet characters of hexadecimal to stdout
	 */
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
