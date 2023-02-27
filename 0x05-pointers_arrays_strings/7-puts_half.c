#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be tweaked
 * Return: void
 */
void puts_half(char *str)
{
	long int i = 0, length = 0;

	while (str[i++])
		length++;

	for (i = length / 2 ; i < length ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
