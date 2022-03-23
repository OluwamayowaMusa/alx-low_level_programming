#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */
void jack_bauer(void)
{
	int i, j, k, l;

	i = j = k = l = 48;
	while (i < 51)
	{
		while (j < 58)
		{
			while (k < 54)
			{
				while (l < 58)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar(10);
					l++;
				}
				k++;
				l = 48;
			}
			j++;
			k = l = 48;
		}
		i++;
		j = k = l = 48;
		if ((i == 50) && (j == 51))
			break;

	}
}
