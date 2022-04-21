#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers
 * @separator: A string to be printed between numbers
 * @n: Number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
		separator = "";

	if (n <= 0)
		exit(1);

	va_list args;
	int i;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (int)n - 1)
			printf("%s", separator);
	}
	va_end(args);
}
