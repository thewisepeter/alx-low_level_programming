#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes from s2 to be copied
 *
 * Return: Pointer (success) or NULL (failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	if (n < j)
		str = malloc(sizeof(char) * (i + n + 1));
	else
		str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
		exit(EXIT_FAILURE);

	for (p = 0; p < i ; p++)
		str[p] = s1[p];

	if (n >= j)
		for (p = 0 ; p <= j ; p++)
			str[p + i] = s2[p];
	if (n < j)
	{
		for (p = 0 ; p < n ; p++)
			str[p + i] = s2[p];
		str[p + i + 1] = '\0';
	}
		return (str);
}
