#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
  * main -displays last digit.
  * determines if result is 0, greater than 5, less than 6 and not 0
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * find last digit by dividing by ten and recording the remainder
	 * write result to stdout
	 */
	last_digit = (&n % 10);
	if (last_digit > 5)
		printf("%d %d and is greater than 5", last_digit, n);
	if (last_digit == 0)
		printf("%d %d and is 0", last_digit, n);
	if ((last_digit < 6) && (last_digit != 0))
		printf("%d %d and is less than 6 and not 0", last_digit, n);
	return (0);
}
