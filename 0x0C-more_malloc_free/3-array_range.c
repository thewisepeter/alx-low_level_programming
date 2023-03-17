#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: lower end
 * @max: upper end
 *
 * Return: Pointer (success) or NULL (fail)
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *pit;

	if (min > max)
		return (NULL);
	size = sizeof(int) * (max - min + 1);
	pit = malloc(size);
	if (pit == NULL)
		return (NULL);

	for (i = 0 ; i <= (max - min) ; i++)
	{
		pit[i] = min + i;
	}
	return (pit);
}
