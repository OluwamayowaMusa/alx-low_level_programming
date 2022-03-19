#include <stdio.h>

/**
 * main - Entry Point
 * Prints different combinations of two digits
 * Return:0
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 49;
	while (i < 57)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if ((i != 56) && (j != 57))
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar(10);
	return (0);
}
