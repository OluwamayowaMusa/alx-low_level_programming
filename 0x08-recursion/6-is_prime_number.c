#include "main.h"

/**
 * is_prime_number - check if a number is prime
 * @n: Number passed
 *
 * Return: 1 - if input integer is prime
 *	   0 - otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	i++;
	is_prime_number(n);
}
