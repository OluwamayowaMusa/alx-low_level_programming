#include "main.h"

/**
 * times_table - Print the 9 times table
 */
void times_table(void)
{
	int i, j, k;

	i = j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (j != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			else
			{
				_putchar(k + '0');
				if ((i > 3 && k > 4) || ((i == 3 || i == 2) && k > 7))
				{
					_putchar(44);
					_putchar(32);
				}
				else if (j != 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			}
			j++;
		}
		_putchar(10);
		i++;
		j = 0;
	}
}
