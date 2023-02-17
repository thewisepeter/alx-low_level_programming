#include <stdio.h>

/**
 * main - Prints alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		/**
		 * if condition filters out e and q
		 */
		if ((c != 'e') && (c != 'q'))
			putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
