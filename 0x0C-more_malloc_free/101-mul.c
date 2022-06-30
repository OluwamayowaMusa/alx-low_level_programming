#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Multiplies two positive numbers
 * @argc: Argument Count
 * @argv: Argument Vector
 *
 * Return: Always EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	char *s;
	int i, num, num1;

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}
	for (i = 1; argv[i]; i++)
	{
		s = argv[i];
		while (*s)
		{
			if (!isdigit(*s))
			{
				puts("Error");
				exit(98);
			}
			s++;
		}
	}
	num = atoi(argv[1]);
	num1 = atoi(argv[2]);
	printf("%d\n", num * num1);
	return (0);
}
