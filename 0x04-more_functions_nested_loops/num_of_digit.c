#include <stdio.h>

/**
 * main - Determine number of digits
 */
void main(void)
{
	int k, n;

	k = 0;
	n = 1234;
	while (n > 10)
	{
		n /= 10;
		k++;
	}
	printf("%d\n", k);
}
