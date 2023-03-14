#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width of 2D
 * @height: height of 2D
 *
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int **pit;
	int a, b;

	pit = malloc(height * sizeof(int *));
	if (pit == NULL)
		return (NULL);

	for (a = 0 ; a < height ; a++)
	{
		pit[a] = malloc(width * sizeof(int));
		if (pit[a] == NULL)
		{
			for (b = 0 ; b < a ; b++)
				free(pit[b]);
			free(pit);
			return (NULL);
		}
		for (b = 0 ; b < width ; b++)
		{
			pit[a][b] = 0;
		}
	}
	return (pit);
}
