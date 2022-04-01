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
	_putchar(h);
	_putchar(10);
}
