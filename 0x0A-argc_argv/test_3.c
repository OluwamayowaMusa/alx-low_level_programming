#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers togther
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
