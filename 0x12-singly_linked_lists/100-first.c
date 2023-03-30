#include <stdio.h>

void peter(void)__attribute__((constructor));

/**
 * peter - prints sentence before main
 *
 * Return: void
 */
void peter(void)
{
	printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}


