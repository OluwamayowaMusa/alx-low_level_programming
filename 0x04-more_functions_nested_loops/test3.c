#include <stdio.h>

/**
 * main - Power
 */
void main(void)
{
	int i, base, exp, result;

	i = 0;
	result = 1;
	base = 10;
	exp = 3;
	while (i < exp)
	{
		result *= base;
		i++;
	}
	printf("%d\n", result);
}
