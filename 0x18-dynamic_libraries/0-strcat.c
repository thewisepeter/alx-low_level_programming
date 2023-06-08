#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *@src: source file
 *@dest: destination file
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (i = 0 ; dest[i] != 0 ; i++)
	{
		;
	}
	for (j = 0 ; src[j] != 0 ; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
