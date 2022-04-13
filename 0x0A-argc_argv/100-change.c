#include <stdio.h>
#include <stdlib.h>

int change(int money);
/**
 * main - Minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Number of coins
 */
int main(int argc, char *argv[])
{
	int money, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
		printf("%d\n", 0);
	i = change(money);
	printf("%d\n", i);
	return (0);
}


/**
 * change - Minimum number of coins
 * @money: Money passed
 * Return: Number of coins
 */
int change(int money)
{
	int i = 0;

	while (money > 0)
	{
		if (money / 25 != 0)
		{
			i += money / 25;
			money = money % 25;
		}
		else if (money / 10 != 0)
		{
			i += money / 10;
			money = money % 10;
		}
		else if (money / 5 != 0)
		{
			i += money / 5;
			money = money % 5;
		}
		else if (money / 2 != 0)
		{
			i += money / 2;
			money = money % 2;
		}
		else
		{
			money = money - 1;
			i++;
		}
	}
	return (i);
}
