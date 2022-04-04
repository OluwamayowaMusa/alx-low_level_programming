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
	char *str;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			str = &s[i];
			*str += 13;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			str = &s[i];
			*str -= 13;
		}
	}
	return (s);
}

/**
 * main - Test Function
 */
void main(void)
{
	char s[] = "Boy is a good\n";
	char *p;

	p = rot13(s);
	printf("%s", p);
	printf("%s", s);
	p = rot13(s);
	printf("%s", p);
	printf("%s", s);
}
