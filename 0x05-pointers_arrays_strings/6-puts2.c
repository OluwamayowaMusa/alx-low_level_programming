#include "main.h"

/**
 * puts2 - Print every other character of a string
 * @str: String passed
 */
void puts2(char *str)
{
	int i, h;

	i = _strlen(str);
	for (h = 0; h <= i; h += 2)
		_putchar(*(str + h));
	_putchar(10);
}
