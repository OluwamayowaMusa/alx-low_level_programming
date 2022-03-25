#include <stdio.h>

/**
 * print_triangle - Print triangle
 * @size: Size of the triangle to be printed
 */
void main(void)
{
	int i, j, k, l, size;

	i = k = 0;
	size = getchar() - '0';
	j = size - 1;
	if (size < 1)
	{
		putchar(10);
	}
	else
	{
		while (k < size)
		{
			l = size - j;
			while (i < l)
			{
				while (j > i)
				{
					putchar(32);
					j--;
				}
				putchar(35);
				i++;
			}
			putchar(10);
			k++;
			j = size - (1 + i);
			i = 0;
		}
	}
}
