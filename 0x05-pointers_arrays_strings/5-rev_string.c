#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: str to be outputted
 * Return: void
 */

void rev_string(char *s)
{
	/**
	 * the concept is to swap the position of the last letter forthe first
	 * to do that we need length of string and then half it and mirror
	 */
	int i = 0, length = 0;
	char temp;

	while (s[i++])
		length++;

	for (i = length - 1 ; i >= (length / 2) ; i--)
	{
		temp = s[i];
		s[i] = s[(length - i - 1)];
		s[(length - i - 1)] = temp;
	}
}
