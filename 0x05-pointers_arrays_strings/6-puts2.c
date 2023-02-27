#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be evaluated
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, length = 0;

	while (str[i++])
		length++;

	for (i = 0 ; i < length ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
