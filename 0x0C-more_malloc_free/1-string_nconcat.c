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
	unsigned int len1, len2, len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	len = (n < len2) ? (len1 + n) : (len1 + len2);

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1 ; i++)
		str[i] = s1[i];
	for (i = 0 ; i < n && s2[i] != '\0' ; i++)
		str[len1 + i] = s2[i];
	for (i = 0 ; i < len2 && s2[i] != '\0' ; i++)
		str[len1 + i] = s2[i];
	str[len] = '\0';
	return (str);
}
