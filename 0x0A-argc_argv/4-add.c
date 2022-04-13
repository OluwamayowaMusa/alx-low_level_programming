#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int index;

	if (argc == 1)
		printf("%d\n", 0);

	if (argc > 2)
	{
		for (j = 1; argv[j]; j++)
		{
			for (index = 0; *(argv[j] + index); index++)
			{
				if (!isdigit(*(argv[j] + index)))
				{
					printf("Error\n");
					return (1);
				}
			}
			i = atoi(argv[j]);
			sum += i;
		}
		printf("%d\n", sum);
	}
	return (0);
}
