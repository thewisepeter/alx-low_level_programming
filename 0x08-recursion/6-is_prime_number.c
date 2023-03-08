#include "main.h"

int prime_num(int n, int i);

/**
 * is_prime_number - function that determines if n is a prime number
 * @n: number to be evaluated
 * Return: 1 (yes) or 0 (no)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, n - 1));
}
/**
 * prime_num - determines if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 (yes) 0 (no)
 */
int prime_num(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_num(n, i - 1));
}
