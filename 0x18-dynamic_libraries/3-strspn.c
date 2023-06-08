#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string with characters to match
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i, j;

	n = 0;
	for (i = 0 ; s[i] != 0 ; i++)
	{
		for (j = 0 ; accept[j] != 0 ; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
	}
	return (n);
}
