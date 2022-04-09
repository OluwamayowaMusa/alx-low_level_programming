#include "main.h"

/**
 * _strlen_recursion - Length of string
 * @s: string passed
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (!(*s))
		return (0);
	i++;
	return (i + _strlen_recursion(s + i));
}
