#include <stdio.h>


/**
 * add - adds two integers
 * @a: integer to be added
 * @b integer to be added
 *
 * Return: sum (success)
 */
int add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
 * sub - function the gets difference
 * @a: integer
 * @b: integer
 *
 * Return: sub (success)
 */
int sub(int a, int b)
{
	int sub;

	sub = a - b;

	return (sub);
}

/**
 * mul - multiplies two integers
 * @a: integer
 * @b: integer
 *
 * Return: sub (success)
 */
int mul(int a, int b)
{
	int mul;

	mul = a * b;

	return (mul);
}

/**
 * mul - multiplies two integers
 * @a: integer
 * @b: integer
 *
 * Return: div (success)
 */
int div(int a, int b)
{
	int div;

	div = a / b;

	return (div);
}

/**
 * mod - finds remainder of divison
 * @a: integer
 * @b: integer
 *
 * Return: mod
 */
int mod(int a, int b)
{
	int mod;

	mod = a % b;

	return (mod);
}
