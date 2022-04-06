#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String passed
 * @c: character passed
 *
 * Return: pointer to the first occurrence of
 * the charcter 'c' in the string 's'
 */
char *_strchr(char *s, char c)
{
	char *str, st[1000000], a[98] = "nil";
	int i, j = 0;

	str = st;
	if (c == '\0')
		return (str);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			for (j = 0; s[i] != '\0'; j++, i++)
			{
				st[j] = s[i];
			}
			return (str);
		}
	}
	str = a;
	return (str);
}

/**
 * main - test function
 */
void main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');
	printf("%s\n", f);
}
