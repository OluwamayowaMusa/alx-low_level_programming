#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: String passed
 */
void _puts_recursion(char *s);
{
	int i = 0;

	if (!(*s))
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	i++;
	_puts_recursion(s + i);

}
