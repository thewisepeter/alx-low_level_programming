#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to be examined
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; ++i)
	{
		;
	}
	return (i);
}

/**
 * _strcpy - copies the string
 * @dest: destination string
 * @src: source string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: pointer to name string in dog_t
 * @age: age of dog
 * @owner: pointer to owner string in dog_t
 *
 * Return: pointer (success) NULL (fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	int len_1, len_2;

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	len_1 = _strlen(name);
	len_2 = _strlen(owner);

	doggie->name = malloc(sizeof(char) * (len_1 + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}

	doggie->owner = malloc(sizeof(char) * (len_2 + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}

	doggie->age = age;
	_strcpy(doggie->name, name);
	_strcpy(doggie->owner, owner);

	return (doggie);
}
