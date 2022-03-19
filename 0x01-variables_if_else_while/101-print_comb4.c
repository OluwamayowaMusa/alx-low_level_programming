#include <stdio.h>

/**
 * main - Entry point
 * Print all possible combination of three digits
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 48;
	j = 49;
	k = 50;
	while (i < 56)
	{
		while (j  < 57)
		{
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 54)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
	}
	putchar(10);
	return (0);
}
