#include "main.h"

/**
 * times_table - Print the 9 times table
 */
void times_table(void)
{
	int i, j, k;

	i = j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			k = i * j;
			_putchar(k + '0');
			_putchar(44);
			_putchar(32);
			_putchar(32);
			j++;
		}
		_putchar(10);
		i++;
		j = 0;
	}
}
