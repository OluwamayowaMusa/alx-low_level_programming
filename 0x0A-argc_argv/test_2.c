#include <stdio.h>

/**
 * main - Prints all the arguments a program receives
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
