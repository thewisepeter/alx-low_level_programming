#include "main.h"

/**
 * is_prime_number - function that determines if n is a prime number
 * @n: number to be evaluated
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if ((n % n == 0) && (n % 1 == 0))
	{
		return (1);
	}
	else
		return (0);
}
