#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: array
 * @size: size of cube
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int d1, d2, i;

	d1 = 0;
	d2 = 0;
	for (i = 0 ; i < size ; i++)
	{
		d1 = a[i * size + i] + d1;
		d2 = a[i * size + (size - i - 1)] + d2;
	}
	printf("%d, %d\n", d1, d2);
}
