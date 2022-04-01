#include "main.h"

/**
 * puts2 - Print every other character of a string
 * @str: String passed
 */
void puts2(char *str)
{
	char c = ' ';
	int i, h;

	i = 0;
	while (c != '\0')
	{
		c = *(str + i);
		i++;
	}
	i--;
	for (h = 0; h <= i; h += 2)
		_putchar(*(str + h));
	_putchar(10);
}
