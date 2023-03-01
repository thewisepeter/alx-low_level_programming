#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
