#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: string to be worked on
 * @b: character to be filled
 * @n: number of bytes to be filled
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		for (i = 0 ; i <= n ; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
