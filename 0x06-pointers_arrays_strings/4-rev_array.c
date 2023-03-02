#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array to be examined
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0 ; i < n-- ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
