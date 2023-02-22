#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (b = 0 ; b <=1 ; b++)
	{
		for (a = 0 ; a <= 9 ; a++)
		{
		printf("%d", a);
		putchar (',');
		putchar (' ');
		putchar ('\n');
		}
	}
	putchar ('\n');
	return (0);
}
