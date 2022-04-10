#include "main.h"
#include <stdio.h>

/**
 * sqrt_ - Find square root of number
 * @n:Number
 * @res:Root
 * Return: root - if n has a natural square root
 *	    -1  - otherwise
 */
int sqrt_(int n, int res)
{
	if (n / res == res && n % res == 0)
		return (res);
	if (n / res == n)
		return (-1);
	return (sqrt_(n, res - 1));
}

/**
 * _sqrt_recursion - Natural square root of a number
 * @n: Number
 * Return: root - if n has a natural root
 *	    -1  - otherwise
 */
int _sqrt_recursion(int n)
{
	int i = n / 2;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_(n, i));
}

/**
 * main - test function
 */
void main(void)
{
	printf("%d\n", _sqrt_recursion(16));
}
