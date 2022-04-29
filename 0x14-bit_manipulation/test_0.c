#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of string
 * @s: string passed
 *
 * Return: Length
 */
int _strlen(const char *s)
{
	int len  = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
 * _pow - base raised to exponent
 * @base: Base
 * @exp: Exponent
 *
 * Return: result
 */
int _pow(int base, int exp)
{
	int result = 1, i = 0;

	if (exp == 0)
		return (result);
	while (i < exp)
	{
		result *= base;
		i++;
	}
	return (result);

}
/**
 * check_char - check characters
 * @b: string of characters
 *
 * Return: 0 - if other characters other than 0 or 1 are present
 *         1 - only 0 and 1
 */
int check_char(const char *b)
{
	int i;

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (1);
}

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number
 *         0 - if b is NULL
 *           - if another character is in b other than 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int check, index, len;

	if (b == NULL)
		return (0);
	check = check_char(b);
	if (check == 0)
		return (0);
	len = _strlen(b);
	len--;
	for (index = 0; b[index]; index++, len--)
	{
		if (b[index] == '0')
		{
			num += (unsigned int)(0 * _pow(2, len));
		}
		else
		{
			num += (unsigned int)(1 * _pow(2, len));
		}
	}
	return (num);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("0000000000000000000000110010010");
	printf("%u\n", n);
	return (0);
}
