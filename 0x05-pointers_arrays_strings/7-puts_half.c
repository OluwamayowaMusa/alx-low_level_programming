#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: String passed
 */
void puts_half(char *str)
{
	char c;
	char *tmp;
	int i, h, j;

	i = 0;
	tmp = str;
	while (c != '\0')
	{
		c = *(str + i);
		h = i++;
	}
	if (h % 2 == 0)
	{
		j = h / 2;
		while (j < h)
		{
			_putchar(*(tmp + j));
			j++;
		}
	}
	else
	{
		j = (h - 1) / 2;
		while (j < h)
		{
			_putchar(*(tmp + j));
			j++;
		}
	}
	_putchar(10);
}
