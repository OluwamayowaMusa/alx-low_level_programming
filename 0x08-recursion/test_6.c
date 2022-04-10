#include "main.h"
#include <stdio.h>

/**
 * prime_number - Check if anumber is prime
 * @n:Number passed
 * @num: Test number
 *
 * Return: 1 - if n is prime
 *	   0 - otherwise
 */
int prime_number(int n, int num)
{
	if (n % num == 0)
		return (0);
	if (num == n / 2)
		return (1);
	return (prime_number(n, num + 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: Number passed
 *
 * Return: 1 - if input integer is prime
 *	   0 - otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (prime_number(n, i));
}

/**
 * main - test function
 */
void main(void)
{
	printf("%d\n", is_prime_number(19));
}
