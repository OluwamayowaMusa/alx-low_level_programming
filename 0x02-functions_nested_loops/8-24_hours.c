#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */
void jack_bauer(void)
{
	int i, j, k, l;
	int control = 1;

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
					if (((i == 50) && (j == 51)) && ((k == 53) && (l == 57)))
					{
						control = 0;
						break;
					}
					l++;
				}
				k++;
				l = 48;
				if (control == 0)
					break;
			}
			j++;
			k = l = 48;
			if (control == 0)
				break;
		}
		i++;
		j = k = l = 48;
		if (control == 0)
			break;

	}
}
