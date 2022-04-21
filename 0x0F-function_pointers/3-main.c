#include "3-calc.h"
#include <stdio.h>

/**
 * main - test function
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%')
			&& (num2 == 0))
	{
		printf("Error\n");
		exit(99);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func(num1, num2));
	return (0);
}
