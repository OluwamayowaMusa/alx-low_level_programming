#include "main.h"

/**
 * print_times_table - Print the n times table
 * @n: The number of time table
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(44);
				_putchar(32);
				k = i * j;
				if (k <= 99)
					_putchar(32);
				if (k <= 9)
					_putchar(32);
				if (k >= 100)
				{
					_putchar((k / 100) + '0');
					_putchar(((k % 100) / 10) + '0');
				}
				else if (k > 9 && k < 100)
				{
					_putchar((k / 10) + '0');
				}
				_putchar((k % 10) + '0');
			}
			_putchar(10);
		}
	}
}
