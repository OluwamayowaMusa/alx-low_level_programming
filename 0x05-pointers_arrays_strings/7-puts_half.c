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
		for (; i < h; i++)
			_putchar(*(str + i));
	}
	else
	{
		i = (h - 1) / 2;
		for (; i < h; i++)
			_putchar(*(str + i));
	}
	_putchar(10);
}
