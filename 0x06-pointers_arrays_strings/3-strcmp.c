#include "main.h"

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
