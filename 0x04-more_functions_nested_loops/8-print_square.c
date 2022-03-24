#include "main.h"

/**
 * print_square - Print a square
 * @size: Size of square to be printed
 */
void print_square(int size)
{
	int i, j;

	i = j = 0;
	if (size < 1)
		_putchar(10);
	else
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			i++;
			j = 0;
			_putchar(10);
		}
	}
}
