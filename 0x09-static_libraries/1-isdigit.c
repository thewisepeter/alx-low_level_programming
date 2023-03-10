#include "main.h"

/**
 * _isdigit - checks if input is a number from 0 - 9
 * @c: character to be examined
 * Return: 1 if digit 0 else
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
