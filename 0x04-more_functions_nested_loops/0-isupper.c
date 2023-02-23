#include "main.h"
/**
 * _isupper - determines if a character is uppercase
 * @c: number to be checked 
 * Return: 1 for uppercase 0 anything else
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}
