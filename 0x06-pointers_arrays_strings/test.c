#include <stdio.h>
#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: String passed
 * Return: Encoded string
 */
char *leet(char *s)
{
	char alpha[] = "aAeEoOtTlL";
	char leet_[] = "4433007711";
	char *str;
	int i, h;

	for (i = 0; s[i] != '\0'; i++)
	{
		h = 0;
		while (h < 10)
		{
			if (s[i] == alpha[h])
			{
				str = &s[i];
				*str = leet_[h];
				break;
			}
			h++;
		}
	}
	return (s);
}

/**
 * main - test function
 */
void main(void)
{
	char s[] = "Expect the best";
	char *p;

	p = leet(s);
	printf("%s\n", p);
	printf("%s\n", s);
}
