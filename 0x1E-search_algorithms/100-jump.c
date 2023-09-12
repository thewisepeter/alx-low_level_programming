#include "search_algos.h"
#include <math.h>

size_t min(size_t a, size_t b);

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

/**
 * jump_search - searches for a value in a sorted array of integers
 * using a jump search algorithm
 * @array: sorted array to search
 * @size: size of array
 * @value: value being searched for
 *
 * Return: index to value  or -1 fail
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, low, high;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}

	/* might mislead in some cases when value is absent */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
