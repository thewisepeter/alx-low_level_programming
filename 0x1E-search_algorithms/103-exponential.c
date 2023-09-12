#include "search_algos.h"
int search_binary(int *array, size_t l, size_t r, int value);
size_t min(size_t a, size_t b);

/**
 * exponential_search -  searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size of array
 * @value: value to be searched
 *
 * Return: index of value or -1 fail
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t l, r, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	l = bound / 2;
	r = min(bound, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", l, r);
	return (search_binary(array, l, r, value));
}
/**
 * search_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: sorted array to be searched
 * @l: lower index
 * @r: upper index
 * @value: value to search for
 *
 * Return: index of value or -1 fail
 */
int search_binary(int *array, size_t l, size_t r, int value)
{
	size_t m, i;

	if (!array)
		return (-1);

	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
			printf("%i%s", array[i], i == r ? "\n" : ", ");
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return ((int)m);
	}

	return (-1);
}

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}
