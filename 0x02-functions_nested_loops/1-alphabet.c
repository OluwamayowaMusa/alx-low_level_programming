#include "main.h"

/**
 * print_alphabet - Entry point, no inputs
 * Print aplhabet in lower case
 * Return: nothing
 */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
