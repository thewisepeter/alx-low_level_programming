#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments passed to main
 * @argv: string
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{

	/**
	 * ignoring argv as it's not needed
	 */
	(void) argv;
		printf("%d\n", argc - 1);
	return (0);
}
