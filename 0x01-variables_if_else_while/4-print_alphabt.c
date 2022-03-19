#include <stdio.h>

/**
 * main - Entry point
 * Print alphabet except q and e
 * Return: 0
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if ((i == 101) || (i == 113))
		{
			i++;
			continue;
		}
		else
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);
	return (0);
}
