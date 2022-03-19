#include <stdio.h>

/**
 * main - Entry point
 * Print all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	i = 48;
	j = 48;
	k = 48;
	l = 48;
	while (i < 58)
	{
		while (j < 58)
		{
			while (k < 58)
			{
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					putchar(44);
					l++;

				}
				k++;
				l = 48;
			}
			j++;
			k = 48;
			l = j + 1;
		}
		i++;
		j = 48;
		k = i;
		l = j + 1;
	}
	putchar(10);
	return (0);
}
