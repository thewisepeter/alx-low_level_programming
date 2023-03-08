#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to be measured
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
