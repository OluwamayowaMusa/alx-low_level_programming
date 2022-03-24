#include <stdio.h>

/**
 * main - Prints the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	unsigned long int i, num, j;

	i = 50829999;
	j = 50828599;
	num = 1;
	while (i > 0)
	{
		if (612852475143 % i == 0)
		{
			num = i;
			while (j < num)
			{
				if (num % j == 0)
				{
					num += 1;
					break;
				}
				j++;
			}
		}
		if (i == num)
		{
			break;
		}
		i--;
		j = 50828599;
	}
	printf("%lu\n", num);
	return (0);
}
