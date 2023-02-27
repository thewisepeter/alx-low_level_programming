#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be tweaked
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, length = 0;

	while (str[i++])
		length++;

	if (length % 2 == 0)
	{
		for (i = length / 2 ; i < length ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		if (length % 2 == 1)
		{
			for (i = (length - 2) / 2 ; i < length ; i++)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
