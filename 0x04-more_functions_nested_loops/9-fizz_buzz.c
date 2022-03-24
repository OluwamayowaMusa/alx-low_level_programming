#include <stdio.h>

/**
 * main - Print number 1 to 100 with 
 * Numbers divisible by 3 replaced with "Fizz"
 * Numbers divisible by 5 replaced with "Buzz"
 * Numbers divisible by both 3 and 5 with "FizzBuzz"
 * Return: 0
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(32);
		i++;
	}
	putchar(10);
}
