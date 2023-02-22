#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: number to be examined
 * Return: last digit
 */
int print_last_digit(int r)
{
	int last_digit;

	/**
	 * find last number by dividing by 10
	 * display remainder
	 */
	last_digit = (r % 10);
	_putchar (last_digit + '0');
	return (last_digit);
}
