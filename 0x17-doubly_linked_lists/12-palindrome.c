#include <stdio.h>


/**
 * is_palindrome - Check if a number is palindrome
 * @num: Number passed
 *
 * Return: 1 - If palindrome
 *         0 - otherwise
 */
int is_palindrome(int num)
{
	int i = 0, j = num;

	while (num > 0)
	{
		if (i == 0)
			i = num % 10;
		else
			i = i * 10 + num % 10;
		num = num / 10;
	}
	if (i == j)
		return (1);
	else
		return (0);

}
/**
 * main - Largest palindrome from product of two 3-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2, temp, res, ctrl = 1, store;

	num2 = 1;

	while (num2 < 1000)
	{
		num1 = 1;
		while (num1 <= num2)
		{
			res = num1 * num2;
			if (res % 10 != 0)
			{
				if (is_palindrome(res) == 1)
				{
					temp = res;
					if (ctrl == 1)
						store = temp;
					else if (temp > store)
						store = temp;
				}
				ctrl = 2;
			}
			num1++;
		}
		num2++;
	}
	printf("%d", store);
	return (0);

}
