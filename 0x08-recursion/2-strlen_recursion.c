#include "main.h"

/**
 * _strlen_recursion - Length of string
 * @s: string passed
 * Return: Length
 */
int i = 0;
int _strlen_recursion(char *s)
{
	int j = 0;

	if (!(*s))
		return (i);
	j++;
	i++;
	_strlen_recursion(s + j);
	return (0);
}
