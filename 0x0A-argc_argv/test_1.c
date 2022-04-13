#include <stdio.h>

/**
 * main - Print the number of arguments passed to a program
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
