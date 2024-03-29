#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -  function that prints a name
 * using pointer to function
 * @name: pointer to string
 * @f: pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
