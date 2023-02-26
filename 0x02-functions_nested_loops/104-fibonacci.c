#include <stdio.h>

/**
 * main - entry point
 * prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long a = 1, b = 2;

	while (i < 98)
	{
		if (i == 0)
			printf("%ld", a);
		else if (i == 1)
			printf(", %ld", b);
		else
		{
			b = b + a;
			a = b - a;
			printf(", %ld", b);
		}
		++i;
	}
	printf("\n");
	return (0);
}
