#include "main.h"

/**
 * more_numbers - Print 0 to 14 ten times
 */
void more_numbers(void)
{
	int i, j, k;

	i = j = 48;
	k = 1;
	while (k < 11)
	{
		while (i < 50)
		{
			while (j < 58)
			{
				if (i == 49)
					_putchar(i);
				_putchar(j);
				if (i == 49 && j == 52)
					break;
				j++;
			}
			i++;
			j = 48;
		}
		_putchar(10);
		i = j = 48;
		k++;
	}
}
