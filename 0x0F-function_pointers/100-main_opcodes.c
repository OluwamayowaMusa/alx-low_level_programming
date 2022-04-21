#include <stdlib.h>
#include <stdio.h>

/**
 * main - test function
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	int (*func)(int, char **) = main;
	unsigned char opcode;
	int i, bytes;

	bytes = atoi(argv[1]);
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)func;
		printf("%.2x", opcode);

		if (i != bytes - 1)
			printf(" ");
		func++;
	}
	putchar('\n');
	return (0);
}
