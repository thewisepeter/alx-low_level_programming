#include "main.h"
#include <unistd.h>

void _puts(char *str);
int _putchar(char c);

/**
 * main - program that prints its name
 * @argc: number of arguments passed to main
 * @argv: string
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		_puts(argv[0]);
	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: str to be outputted
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
