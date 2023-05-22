#include <stdio.h>

int rand()
{
	int count = -1;

	count++;
	switch (count)
	{
		case 0:
			return 9;
		case 1:
			return 8;
		case 2:
			return 10;
		case 3:
			return 24;
		case 4:
			return 75;
		case 5:
			return 9;
		default:
			return (count + 2);
	}
}
