#include "main.h"

/**
 * power - return the base ^ exponent
 * @b: Base
 * @exp: Exponent
 * Return: Result
 */
int power(int b, int exp)
{
	int i = 1;
	int result;

	result = b;
	while (i < exp)
	{
		result *= b;
		i++;
	}
	if (exp == 0)
		result = 1;
	return (result);
}

/**
 * _atoi - Converts a string to integer
 * @s: String passed
 */
int _atoi(char *s)
{
	char c;
	int i, h, k, l, j;

	i = k = 0;
	while (c != '\0')
	{
		c = *(s + i);
		h = i++;
	}

	i = 0;
	while (i < h)
	{
		if (s[i] == '0')
		{
			l = 0;
			j = power(10, (h - 1 -i));
			l = 0 * j;
			k += l;
		}
		else if (s[i] == '1')
		{
			l = 1;
			j = power(10, (h - 1 - i));
			l = 1 * j;
			k += l;
		}
		else if (s[i] == '2')
		{
			l = 2;
			j = power(10, (h - 1 - i));
			l = 2 * j;
			k += l;
		}
		else if (s[i] == '3')
		{
			l = 2;
			j = power(10, (h - 1 - i));
			l = 3 * j;
			k += l;
		}
		else if (s[i] == '4')
		{
			l = 4;
			j = power(10, (h - 1 - i));
			l = 4 * j;
			k += l;
		}
		else if (s[i] == '5')
		{
			l = 5;
			j = power(10, (h - 1 - i));
			l = 5 * j;
			k += l;
		}
		else if (s[i] == '6')
		{
			l = 6;
			j = power(10, (h - 1 - i));
			l = 6 * j;
			k += l;
		}
		else if (s[i] == '7')
		{
			l = 7;
			j = power(10, (h - 1 - i));
			l = 7 * j;
			k += l;
		}
		else if (s[i] == '8')
		{
			l = 8;
			j = power(10, (h - 1 - i));
			l = 8 * j;
			k += l;
		}
		else if (s[i] == '9')
		{
			l = 9;
			j = power(10, (h - 1 - i));
			l = 9 * j;
			k += l;
		}
		else if (s[i] == '-')
		{
			k *= -1;
		}
		else if (s[i] == '+')
		{
			k *= 1;
		}
		i++;
	}
