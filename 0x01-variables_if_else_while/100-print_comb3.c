#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	c = 0;
	for(c = 0 ; c < 100 ; c++)
	{
		putchar((c/10)+'0');
		putchar((c%10)+'0');
		if (c < 9);
		{
		putchar (',');
		putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
