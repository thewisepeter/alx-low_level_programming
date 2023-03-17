#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes of the new memory block
 *
 * Return: pointer (success) NULL (fail)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pit;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pit = malloc(new_size);
	if (!pit)
		return (NULL);

	old_ptr = ptr;
	if (new_size > old_size)
	{
		for (i = 0 ; i < old_size ; i++)
			pit[i] = old_ptr[i];
	}

	if (new_size < old_size)
	{
		for (i = 0 ; i < new_size ; i++)
			pit[i] = old_ptr[i];
	}
	free(old_ptr);
	return (pit);
}
