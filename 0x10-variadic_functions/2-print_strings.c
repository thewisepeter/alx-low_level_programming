#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1 && separator != NULL && str != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
