#include "main.h"

/**
 * print_diagonal - Print diagonal line
 * @n: Number of times to print line
 */
void print_diagonal(int n)
{
	int i, j;

	i = j = 0;
	if (n < 1)
	{
		_putchar(10);
	}
	else
	{
		while (i < n)
		{
			while (j < i)
			{
				_putchar(32);
				j++;
			}
			_putchar(92);
			_putchar(10);
			i++;
			j = 0;
		}
		_putchar(10);
	}
}
