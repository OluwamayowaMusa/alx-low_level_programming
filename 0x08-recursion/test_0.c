#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: String passed
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (!(*s))
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	i++;
	_puts_recursion(s + i);
}

/**
 * main - test function
 */
void main(void)
{
	_puts_recursion("Mayowa is boy.");
}
