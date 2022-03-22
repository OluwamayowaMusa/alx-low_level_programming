#include <stdio.h>

/**
 * main - Entry point
 * Test
 * Return: 0
 */
int main(void)
{
	int num, num1;

	num = getchar();
	num1 =  num + '0';
	printf("%d %d %c %c\n", num, num1, num, num1);
	return (0);
}
