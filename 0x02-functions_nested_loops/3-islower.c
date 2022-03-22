#include "main.h"

/**
 * _islower - Entry Point
 * Determine if a character is lowercase
 * @c: The number to be checked
 * Return: 1 if lowercase; 0 otherwise
 */
int _islower(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	else
		return (0);
}
