#include "variadic_function.h"
#include <stdio.h>

/**
 * print_strings - Print strings passed
 * @separator: String to be printed between strings
 * @n: Number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	if (separator == NULL)
		separator = "";
	for (i = 0; i < (int)n; i++)
	{
		if (va_arg(args, char *) == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", va_arg(args, char *));
		if (i != (int)n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
