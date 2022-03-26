#include <stdio.h>
#include <math.h>

/**
 * main - Print an integer
 */
void main(void)
{
	int i, j, k, l, n;

	n = 1024;
	i = n;
	k = 0;
	while (i > 9)
	{
		i /= 10;
		k++;
	}
	j = pow(10, k);
	printf("%d\n", k);
	putchar((n / j) + '0');
	while (k > 1)
	{
		j = pow(10, k);
		l = pow(10, (k - 1));
		putchar(((n % j) / l) + '0');
		k--;
	}
	putchar((n % 10) + '0');
	putchar(10);
}
