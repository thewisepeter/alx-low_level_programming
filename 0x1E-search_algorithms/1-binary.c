#include "search_algos.h"
void print_array(int *array, size_t l, size_t r);

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: sorted array to be searched
 * @size: size of array
 * @value: value to be searched
 *
 * Return: index of value or -1 fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m = 0;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}

/**
 * print_array - prints elements of array
 * @array: array to be printed
 * @l: lower index of array
 * @r: upper index of array
 *
 * Return: Nothing
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}
