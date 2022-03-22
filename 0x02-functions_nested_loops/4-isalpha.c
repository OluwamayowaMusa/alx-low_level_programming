#include "main.h"

/**
 * _isalpha - Entry Point, 1 argument
 * Determine if a charcter is an alphabet
 * @c: The character to be checked
 * Return: 1 if letter; 0 otherwise
 */
int _isalpha(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
