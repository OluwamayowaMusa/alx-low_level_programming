#include "main.h"


/**
 * rot13 - Encode a string using rot13
 * @s: String Passed
 *
 * Return: Encoded string
 */
char *rot13(char *s)
{
	char alphabet[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_13[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	int i, h;

	for (i = 0; s[i] != '\0'; i++)
	{
		h = 0;
		while (h < 53)
		{
			if (s[i] == alphabet[h])
			{
				str = &s[i];
				*str = rot_13[h];
				break;
			}
			h++;
		}
	}
	return (s);
}
