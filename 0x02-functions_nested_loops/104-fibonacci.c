#include <stdio.h>

/**
 * main - entry point fibo
 *
 * Return: 0 (success)
 */
int main(void)
{
	int total  = 3;

	long int first = 1, second = 2;
	long int fb = first + second;

	printf("%ld, ", first);
	printf("%ld, ", second);

	while (total < 98)
	{
		if (total == 98)
		{
			printf("%ld\n", fb);
		}
		else
		{
			printf("%ld, ", fb);
		}
		first = second;
		second = fb;
		fb = first + second;
		total++;
	}
	return (0);
}
