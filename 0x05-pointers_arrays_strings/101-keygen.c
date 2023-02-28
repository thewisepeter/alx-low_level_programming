#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * random_password_gen - randomly generates password
 * @N: length of password
 * Return: void
 */
void random_password_gen(int N)
{
	int i = 0;

	int random = 0;

	srand((unsigned int) (time(NULL)));

	char numbers[] = "01223456789";
	char letter[] = "abcdefghikklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbol[] = "!@#$^&*?";
	char password[N];

	random = rand() % 4;

	for (i = 0 ; i < N ; i++)
	{
		if (random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2)
		{
			password[i] = symbol[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 3)
		{
			password[i] = LETTER[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
