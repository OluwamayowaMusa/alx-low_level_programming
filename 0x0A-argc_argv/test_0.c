#include "main.h"
#include <stdio.h>

/**
 * main - Prints a program name
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; *argv[0]; i++)
		putchar(*argv[0]++);
	putchar('\n');

	return (0);
}
