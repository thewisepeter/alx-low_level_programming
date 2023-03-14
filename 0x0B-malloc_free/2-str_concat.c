#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: *str_concat or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *conca;
	int i, j, r;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	conca = malloc(sizeof(char) * (i + j + 1));

	if (conca == NULL)
		return (NULL);

	for (r = 0 ; r < i  ; r++)
	{
		conca[r] = s1[r];
	}

	for (r = 0 ; r <= j ; r++)
	{
		conca[i + r] = s2[r];
	}
	return (conca);
}
