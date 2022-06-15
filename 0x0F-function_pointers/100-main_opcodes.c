#include <stdio.h>
#include <stdlib.h>

/**
 * main - Opcode 
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: Always EXIT_SUCCESS
 *
 */
int main(int argc, char *argv[])
{
	unsigned int opcode;
	int (*address)(int, char **) = main;
	int bytes, index;

	if (argc != 2)
		exit(1);
	bytes = atoi(argv[1]);

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)(address + index);
		if (index != bytes - 1)
			printf("%.2x ", opcode);
		else
			printf("%.2x\n", opcode);
	}
	return (0);
}
