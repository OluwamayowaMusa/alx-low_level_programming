#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two string
 * @s1: first string
 * @s2: second string
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
		return (-15);
	else if (s1 > s2)
		return (15);
	else
		return (0);
}

/**
 * main - Test function
 */
void main(void)
{
	char *s1 = "Hello ";
	char *s2 = "World!\n";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
}
