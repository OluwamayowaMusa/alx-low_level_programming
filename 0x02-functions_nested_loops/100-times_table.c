#include "main.h"

/**
 * print_times_table - Print the n times table
 * @n: The number of time table
 */
void print_times_table(int n)
{
	int i, j, k;

	i = j = 0;
	if (n > 0 && n < 15)
	{
		while (i < (n + 1))
		{
			while (j < (n + 1))
			{
				k = i * j;
				if  (k > 9 && k < 100)
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
					if (j != n)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
					}
				}
				else if (k > 99)
				{
					_putchar((k / 100) + '0');
					_putchar(((k % 100) / 10) + '0');
					_putchar((k % 10) + '0');
					if (j != n)
					{
						_putchar(44);
						_putchar(32);
					}
				}
				else
				{
					_putchar(k + '0');
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
				}
				j++;
			}
			_putchar(10);
			i++;
			j = 0;
		}
	}
}
