#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: address to be used
 * @b: address to be used
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
