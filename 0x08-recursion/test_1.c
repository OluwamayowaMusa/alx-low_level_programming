#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: Sring passed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

/**
 * main - test function
 */
void main(void)
{
	_print_rev_recursion("boy");
}
