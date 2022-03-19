#include <stdio.h>

/**
 * main - Entry Point
 * Print numbers separated by ,
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(44);
		i++;
	}
	putchar(36);
	putchar(10);
	return (0);
}
