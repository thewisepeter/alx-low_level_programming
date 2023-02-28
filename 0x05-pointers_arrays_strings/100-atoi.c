#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be evaluated
 * Return: Value
 */
int _atoi(char *s)
{
	int num = 0;
	int i = 0;
	int sign = 1;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (num * sign);
}
