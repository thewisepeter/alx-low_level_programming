#include <stdio.h>

/**
 * main - entry poin fibonnaci
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int first = 0, second = 1, sum = 0;
	long int fibo = first + second;

	while (fibo <= 4000000)
	{
		if (fibo % 2 == 0)
		{
			sum = (sum + fibo);
		}
		first = second;
		second = fibo;

		fibo = first + second;
	}
	printf("%ld\n", sum);
	return (0);
}
