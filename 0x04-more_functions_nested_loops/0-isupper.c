#include "main.h"

/**
 * _isupper - Check if a character is uppercase
 * @c: The character to be checked
 * Return: 1 if uppercae; 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
