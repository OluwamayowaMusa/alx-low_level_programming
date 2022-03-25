#include "main.h"

/**
 * print_triangle - Print triangle
 * @size: Size of the triangle to be printed
 */
void print_triangle(int size)
{
	int i, j, k, l;

	i = k = 0;
	j = size - 1;
	if (size < 1)
	{
		_putchar(10);
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
					_putchar(32);
					j--;
				}
				_putchar(35);
				i++;
			}
			_putchar(10);
			k++;
			j = size - 1 - i;
			i = 0;
		}
	}
}
