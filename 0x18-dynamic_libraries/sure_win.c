#include <stdio.h>

int rand()
{
	static int count = -1;

	count++;
	switch (count)
	{
		case 0:
			return 8;
		case 1:
			return 8;
		case 2:
			return 7;
		case 3:
			return 9;
		case 4:
			return 23;
		case 5:
			return 74;
		default:
			return (count + 2);
	}
}
