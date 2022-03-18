#include <stdio.h>

/**
 * main - Entry point
 * Print number in scientific notation
 * Return: 0
 */

int main(void)
{
	double var = 50000;

	printf("The value in scientific notation is %.2e\n", var);
	printf("The value in scientific notation is %.2E\n", var);
	return (0);
}
