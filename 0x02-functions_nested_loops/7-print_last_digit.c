#include "main.h"

/**
 * print_last_digit -Print last digit of a number
 * @c: Number to be checked
 * Return: Value of the last digit
 */
int print_last_digit(int c)
{
	int last_digit  = c % 10

	if (last_digit < 0)
		last_digit *= -1;
	return(last_digit);
}
