#include "main.h"

/**
 * times_table - Print the 9 times table
 */
void times_table(void)
{
	int i, j, k, l, m;

	i = j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			k = i * j;
			if (k > 9)
			{
				l = k / 10;
				m = k % 10;
				_putchar(l + '0');
				_putchar(m + '0');
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar(k + '0');
				_putchar(44);
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
