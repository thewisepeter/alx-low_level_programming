#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: number of arguments passed to main
 * @argv: string
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int val, i, res;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	val = atoi(argv[1]);
	res = 0;

	if (val < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0 ; i < 5 && val >= 0 ; i++)
	{
		while (val >= coins[i])
		{
			res++;
			val -= coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
