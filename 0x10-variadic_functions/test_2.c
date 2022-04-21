#include "variadic_functions.h"
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
	char *str;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < (int)n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != (int)n - 1)
			printf("%s", separator);
	}
	va_end(args);
	putchar('\n');
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	print_strings(", ", 2, NULL, "Django");
	return (0);
}
