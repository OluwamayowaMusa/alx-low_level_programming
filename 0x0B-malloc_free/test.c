#include <unistd.h>
#include <stdio.h>

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	printf("HERE\n");
	_exit(98);
	printf("after\n");
	return (0);
}
