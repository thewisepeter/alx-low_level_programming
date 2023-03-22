#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - function that adds
 * @a: integer to be added
 * @b: integer to be added
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts
 * @a: integer
 * @b: integer
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies
 * @a: integer
 * @b: integer
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides
 * @a: integer
 * @b: integer
 *
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that returns remainder of division
 * @a: integer
 * @b: integer
 *
 * Return: division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
