#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types
 * char, int, float and pointer
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int *p;

	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("Size of type my variable n on my computer: %lu bytes\n", sizeof(n));
	printf("Size of pointer: %lu bytes\n", sizeof(p));

	return (0);
}
