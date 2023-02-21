#include "main.h"

/**
 *_isalpha - alphabet character
 *
 * @c: Character to be checked
 * Return: 1 (Success) 0 (Fail)
 */
int _isalpha(int c)
{
	if ((c >= 97) && (c <= 122))
	return (1);
	if ((c >= 65) && (c  <= 90))
	return (1);
	else
	return (0);
}
