#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: source file
 * @dest: destination file
 * @n: bytes used of src
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	n = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		;
	}
	
	for (j = 0 ; j < n && src[j] != '\0' ; j++)
		{
			dest[i] = src[j];
			i++;
		}
	dest[i] = src[j];
	return (dest);
}
