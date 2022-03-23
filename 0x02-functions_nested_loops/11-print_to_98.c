#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers to 98
 * @n: The number to start from
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n  < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
