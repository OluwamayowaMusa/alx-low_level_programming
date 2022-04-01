#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: String passed
 */
void puts_half(char *str)
{
	char c;
	char *tmp;
	int i, h;

	i = 0;
	tmp = str;
	while (c != '\0')
	{
		c = *(str + i);
		h = i++;
	}
	if (h % 2 == 0)
	{
		i = h / 2;
		while (i < h)
		{
			_putchar(*(tmp + i));
			i++;
		}
	}
	else
	{
		i = (h - 1) / 2;
		while (i < h)
		{
			_putchar(*(tmp + i));
			i++;
		}
	}
	_putchar(10);
}
