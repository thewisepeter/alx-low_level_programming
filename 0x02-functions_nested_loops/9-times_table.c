#include <stdio.h>

int main(void)
{
	int a, b;

	b = 0;
	for (a = b + 1 ; a < 10 ; a++)
		b = (0 * a);
	putchar (b + '0');

}
