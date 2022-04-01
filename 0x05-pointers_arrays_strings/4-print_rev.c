#include "main.h"

/**
 * print_rev - Print string in reverse order
 * @s: String Passed
 */
void print_rev(char *s)
{
	char c;
	int i, h;

	c = ' ';
	i = 0;
	while (c != '\0')
	{
		c = *(s + i);
		h = i++;
	}
	h--;
	while (h > -1)
	{
		c = *(s + h);
		_putchar(c);
		h--;
	}
	_putchar(10);
}
