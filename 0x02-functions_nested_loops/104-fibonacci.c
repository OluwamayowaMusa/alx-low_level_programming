#include <stdio.h>

/**
 * main - Entry point
 * Print the first fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int i, j, tmp;
	unsigned long int k, l, m, n, i_half, j_half;
	int count;

	i = j = count = 1;
	while (count < 93)
	{
		printf("%lu, ", j);
		tmp = j;
		if (count != 92)
			j += i;
		i = tmp;
		count++;
	}
	k = i / 10000000000;
	l = j / 10000000000;
	m = i % 10000000000;
	n = j % 10000000000;
	while (count < 99)
	{
		i_half = k + l;
		j_half = m + n;
		if (m + n > 9999999999)
		{
			i_half += 1;
			j_half %= 10000000000;
		}
		printf("%lu%lu", i_half, j_half);
		if (count != 98)
			printf(", ");
		k = l;
		m = n;
		l = i_half;
		n = j_half;
		count++;
	}
	putchar(10);
	return (0);
}
