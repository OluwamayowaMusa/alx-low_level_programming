#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - sum all the parameters
 * @n: First parameter
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list args;

	va_start(args, n);
	if ( n <= 0)
		return (0);
	for (i = 0; i < (int)n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	printf("%d\n", sum_them_all(2, 98, 1024));
	return (0);
}
