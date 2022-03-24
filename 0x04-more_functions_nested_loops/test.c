#include <stdio.h>

/**
 * main - Print diagonal line
 */
void main(void)
{
	int i, j, n;

	i = j = 0;
	n = 10;
	if (n < 1)
	{
		putchar(10);
	}
	else
	{
		while (i < n)
		{
			while (j < i)
			{
				putchar(32);
				j++;
			}
			putchar(92);
			putchar(10);
			i++;
			j = 0;
		}
	}
}
