#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of arguments passed to main
 * @argv: string
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
