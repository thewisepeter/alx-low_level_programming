#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to destination array where content is to be copied
 * @src: pointer to the source of data
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	for (i = 0 ; i < n ; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
