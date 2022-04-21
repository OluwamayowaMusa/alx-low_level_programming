#include "variadic_functions.h"

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
