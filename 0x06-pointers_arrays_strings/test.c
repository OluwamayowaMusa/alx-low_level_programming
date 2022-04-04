#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encode a string using rot13
 * @s: String Passed
 *
 * Return: Encoded string
 */
char *rot13(char *s)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char _rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	int i, h;

	for (i = 0; s[i] != '\0'; i++)
	{
		h = 0;
		while (h < 53)
		{ 
			if (alphabet[h] == s[i])
			{
				str = &s[i];
				*str = _rot13[h];
				break;
			}
			h++;
		}
	}
	return (s);
}

/**
 * main - Test function
 */
void main(void)
{
	char s[] = "boy is a good\n";
	char *ptr;

	ptr = rot13(s);
	printf("%s", ptr);
	printf("%s", s);
	ptr = rot13(ptr);
	printf("%s", ptr);
	printf("%s", s);
}
