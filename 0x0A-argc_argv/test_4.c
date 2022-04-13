#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 - SUCCESS
 *	   1 - ERROR
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);

	if (argc > 2)
	{
		for (j = 1; argv[j]; j++)
		{
			i = atoi(argv[j]);
			if (i == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += i;
		}
		printf("%d\n", sum);
	}
	return (0);
}
