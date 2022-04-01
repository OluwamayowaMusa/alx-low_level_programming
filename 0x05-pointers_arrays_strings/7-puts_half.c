#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: String passed
 */
void puts_half(char *str)
{
	char c;
	int i, h;

	i = 0;
	while (c != '\0')
	{
		c = *(str + i);
		h = i++;
	}
	if (h % 2 == 0)
	{
		i = h / 2 + 1;
		while (i < h)
		{
			_putchar(*(str + i));
			i++;
		}
	}
	else
	{
		i = (h - 1) / 2;
		while (i < h)
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar(10);
}
