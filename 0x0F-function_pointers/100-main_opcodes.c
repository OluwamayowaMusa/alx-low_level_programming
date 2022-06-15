#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print the opcodes of main function
 *
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*address)(int, char **) = main;
	int bytes, i;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)(address + i);
		if (i != bytes - 1)
			printf("%.2x ", opcode);
		else
			printf("%.2x\n", opcode);
	}
	return (0);
}
