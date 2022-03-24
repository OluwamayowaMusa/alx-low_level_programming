#include "main.h"

/**
 * print_last_digit -Print last digit of a number
 * @c: Number to be checked
 * Return: Value of the last digit
 */
int print_last_digit(int c)
{
	int i;

	i = c % 10;
	return ("%d%d", i, i);
}
