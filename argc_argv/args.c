#include <stdio.h>

/**
 * main - Arguments to main
 * @argc: Number of arguments
 * @argv: An array of strings passed
 *
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	printf("Number of arguments passed: %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("Arguments passed");
		printf("--argc[%d] ==> %s\n", i, argv[i]);
	}
	return (0);
}
