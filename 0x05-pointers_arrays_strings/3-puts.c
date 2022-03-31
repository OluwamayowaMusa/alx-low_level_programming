#include "main.h"

/**
 * _puts - Print a string 
 * @str: String passed
 */
void _puts(char *str)
{
	char c;
	int i = 0;

	while (c != '\0')
	{
		c = *(str + i);
		_putchar(c);
		i++;
	}
	_putchar(10);
}
