#include "main.h"

int _strlen_recursion(char *s);
int pal(char *s, int i, int len);

/**
 * is_palindrome - function that checks if a
 * string is a palindrome
 * @s: string to be checked
 *
 * Return: 1 (true) 0 (false)
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal(s, 0, _strlen_recursion(s)));
}

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

/**
 * pal - checks if a string is a palindrome
 * @s: string to be checked
 * @i: iterartor
 * @len: length of string
 *
 * Return: 1 (true) 0 (false)
 */
int pal(char *s, int i, int len)
{
	if (s[i] != s[len - 1])
		return (0);
	if (i >= len)
		return (1);
	i++;
	len--;
	return (pal(s, i, len));
}
