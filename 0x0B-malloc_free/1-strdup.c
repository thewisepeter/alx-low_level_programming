#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 *
 * Return: *_strdup (Success) or NULL (fail)
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != 0)
		i++;

	cpy = malloc(sizeof(char) * (i + 1));

	if (cpy == NULL)
		return (NULL);

	for (j = 0 ; str[j] != 0 ; j++)
	{
		cpy[j] = str[j];
	}
	return (cpy);
}
