#include "main.h"

/**
 * main - Prints a program name
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0;
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; *argv[0]; i++)
		_putchar(*argv[0]++);
	_putchar('\n');

	return (0);
}
