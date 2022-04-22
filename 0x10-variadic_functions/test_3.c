#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints everything
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, len = 0;
	va_list args;
	char *str;

	va_start(args, format);
	while (*(format + len) != '\0')
		len++;
	while (i < len)
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
		default:
			break;
		}
		if ((i != len - 1) && ((*(format + i) == 'c'
			|| *(format + i) == 'i') || (*(format + i) == 'f'
			|| *(format + i) == 's')))
			printf(", ");
		i++;
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
	print_all("ceisss", 'B', 3, "stSchool", NULL, "MUSA");
	return (0);
}
