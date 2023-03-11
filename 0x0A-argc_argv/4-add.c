#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int check_dig(char *s);

/**
 * main - program that adds positive numbers
 * @argc: number of arguments passed to main
 * @argv: string
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, s_i, sum;

	sum = 0;
	for (i = 1 ; i < argc ; i++)
	{
		if (check_dig(argv[i]))
		{
			s_i = atoi(argv[i]);
			sum += s_i;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * check_dig - checks if string elements are digits
 * @s: string to be checked
 *
 * Return: 1 (digit) 0 (non digit)
 */
int check_dig(char *s)
{
	unsigned int i;

	i = 0;
	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
