#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments passed to main
 * @argv: string
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);
	a = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
