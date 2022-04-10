#include "main.h"

/**
 * _sqrt_recursion - Natural square root of a number
 * @n: Number
 * Return: n^(1/2)
 */
int _sqrt_recursion(int n)
{
	int i = n / 2;

	if (n < 0)
		return (-1);
	if (n / i == i && n % i == 0)
		return (i);
	if (n / i == n)
		return (-1);
	i--;
	return (
}
