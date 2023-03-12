#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int min_val(int a[], int b);

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
	int coins[5] = {1, 2, 5, 10, 25};
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", min_val(coins[5], b));
	}
	return (0);
}

/**
 * min_val - program that prints the minimum number
 * of coins to make change for an amount of money
 * @a: array of coins
 * @n: maximum number of coins given
 * @b: value whose changed is required
 *
 * Return: min_val
 */
int min_val(int a[], int b)
{
	int i, j;

	i = 0;
	j = 0;
	int f[i][j];

	f[i][0] = 0;
	for (i = 0 ; i <= sizeof(a) ; i++)
	{
		for (j = 0 ; j < b ; j++)
		{
			if (a[i] > j)
			{
				f[i][j] = f[i - 1][j];
			}
			else
			{
				f[i][j] = min(f[i - 1][j], 1 + f[i][j - a[i]]);
			}
		}
	}
	return (f[i][j]);
}
