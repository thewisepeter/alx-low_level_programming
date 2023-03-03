#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: character to be examined
 * Return: string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = alpha_rot[j];
					break;
			}

		}
	}
	return (s);
}
