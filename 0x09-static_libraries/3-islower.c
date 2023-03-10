#include "main.h"

/**
 *_islower - checks for lowercase character
 *
 * @c: Character to be checked
 * Return: 1 (Success) 0 (Fail)
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
