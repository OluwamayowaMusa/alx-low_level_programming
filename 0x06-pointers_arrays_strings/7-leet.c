#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: String passed
 * Return: Encoded string
 */
char *leet(char *s)
{
	char alpha[] = "aAeEoOtTlL";
	char leet_ = "443300771";
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
		}
	}
	return (s);
}
