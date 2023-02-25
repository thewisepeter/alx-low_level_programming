#include <stdio.h>

/**
 * main - entry point
 * prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i, n;
	long a = 1, b = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", a);
		else if (i == 1)
			printf(", %ld", b);
		else
		{
			b = b + a;
			a = b - a;
		}
		++i;
	}
	printf("\n");
	return (0);
}
