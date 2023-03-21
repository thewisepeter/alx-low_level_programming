#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees memory allocated to dog_t *d
 * @d: pointer to struct
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
