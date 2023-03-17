#include "main.h"
#include <stdlib.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: string to be worked on
 * @b: character to be filled
 * @n: number of bytes to be filled
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

		for (i = 0 ; i < n ; i++)
		{
			s[i] = b;
		}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 *
 * Return: pointer (success) or NULL (fail)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int mem_size;
	void *pit;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_size = (nmemb * size);
	pit = malloc(mem_size);

	if (pit == NULL)
	{
		return (NULL);
	}

	_memset(pit, 0, mem_size);
	return (pit);
}
