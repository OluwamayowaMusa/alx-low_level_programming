#include "3-calc.h"

/**
 * main - test function
 * @argc: Argument Count
 * @argv: Argument Vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *operator;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	operator = argv[2];
	if ((*operator == '/' || *operator == '%')
			&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
