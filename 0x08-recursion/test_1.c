#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: Sring passed
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (!(*s))
		return;
	putchar(*s);
	i++;
	_print_rev_recursion(s + i);
}

/**
 * main - test function
 */
void main(void)
{
	_print_rev_recursion("boy");
}
