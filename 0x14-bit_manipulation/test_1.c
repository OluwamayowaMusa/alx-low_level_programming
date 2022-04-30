#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of number
 * @n: Number passed
 */
void print_binary(unsigned long int n)
{
	char c;

	if (n == 0)
		putchar('0');
	while (n > 0)
	{
		if (n & 1 == 0)
			putchar('0' + ' ');
		else
			putchar(('1' + ' '));
		n = n >> 1;
	}

}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	print_binary(0);
	putchar(10);
	print_binary(1);
	putchar(10);
	print_binary(98);
	putchar(10);
	print_binary(1024);
	putchar(10);
	print_binary((1 << 10) + 1);
	putchar(10);
	return (0);
}
