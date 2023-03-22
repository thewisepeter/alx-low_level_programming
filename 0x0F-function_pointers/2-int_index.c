#include "function_pointers.h"

/**
 * int_index - function that executes a function given
 * as a parameter on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: int_index (success) or -1(fail)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i);

	}
	return (-1);
}
