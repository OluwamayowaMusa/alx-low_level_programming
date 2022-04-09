#include "main.h"
#include <stdio.h>

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
/**
 * main - test fuunction
 */
void main(void)
{
	int j;

	j = _strlen_recursion("It is not is to be a boy");
	printf("%d\n", j);
}
