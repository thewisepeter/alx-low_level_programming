#include "main.h"

int recursive_sqrt(int n, int i);

/**
 * _sqrt_recursion - function that returns th
 * natural square root of a number
 * @n: number whose square root is needed
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (recursive_sqrt(n, 0));
}

/**
 * recursive_sqrt - recursive function to find the square root
 * @n: number whose square root we need
 * @i: iterator
 * Return: square root
 */
int recursive_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (recursive_sqrt(n, i + 1));
}
