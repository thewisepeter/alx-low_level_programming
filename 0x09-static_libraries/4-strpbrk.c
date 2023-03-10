#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string with characters to match
 * Return: &str1[i] or 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}
	return (0);
}
