#include <stdio.h>

/**
 * main - entry point gets the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long num;
	int max_prime;
	int odd_prime;

	num = 612852475143;
	max_prime = 0;
	odd_prime = 3;

	while (num % 2 == 0)
	{
		max_prime = 2;
		num = num / 2;
	}
	while (num != 1)
	{
		while (num % odd_prime == 0)
		{
			max_prime = odd_prime;
			num = num / max_prime;
		}
		odd_prime = (odd_prime + 2);
	}
	printf("%d\n", max_prime);
	return (0);
}
