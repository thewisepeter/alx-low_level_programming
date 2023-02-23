#include <stdio.h>

/**
 * main - FizzBuzz entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 1 ; c <= 100; c++)
	{
		if ((c % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((c % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((c % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", c);
		}
		if (x != 100)
		{
			printf(" ");
		}

	}
	printf("\n");
	return (0);
}
