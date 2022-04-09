#include "main.h"

/**
 * _strlen - Length of string
 * @s: string
 * Return; length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!(*s))
		return (i);
	i++;
	_strlen(s + i);
}

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: Sring passed
 */
void _print_rev_recursion(char *s)
{
	int i;
	i = _strlen(s);

	if (i <= 0)
		return;
	_putchar(s + i);
	i--;
	_print_rev_recursion(s + i);
}
