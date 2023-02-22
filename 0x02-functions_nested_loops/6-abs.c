#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: number to be examined
 * Return: O (Success)
 */
int _abs(int r)
{
	int abs_val;

	if (r < 0)
	{
	abs_val = (r * -1);
	return (abs_val);
	}
	return (r);
}
