#include <stdio.h>

/**
 * main - Entry point
 * Print all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	i = j = 48;
	k = 48;
	l = 49;
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
					if ((j <= 55) || (i <= 56))
					{
						putchar(44);
						putchar(32);
					}
					l++;

				}
				k++;
				l = 48;
			}
			j++;
			k = i;
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
