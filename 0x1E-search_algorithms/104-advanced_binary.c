#include "search_algos.h"

int binary_recursion(int *array, int value,
			    size_t low, size_t high);

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to first element of array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index of value or -1 fail
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	return (binary_recursion(array, value, low, high));
}

/**
 * binary_recursion - recursively searches for
 * a value in sorted array
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @low: lower index
 * @high: upper-end index
 *
 * Return: index of value, or -1 fail
 */
int binary_recursion(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_recursion(array, value,
							mid + 1, high));
		if (array[mid] >= value)
			return (binary_recursion(array, value,
							low, mid));
	}

	return (-1);
}
