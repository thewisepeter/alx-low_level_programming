#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * use at most n bytes from src
 * @dest: destination
 * @src: source string
 * @n: bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_len] != '\0' && src_len < n)
	{
		dest[dest_len + src_len] = src[src_len];
		src_len++;
	}
	return (dest);
}
