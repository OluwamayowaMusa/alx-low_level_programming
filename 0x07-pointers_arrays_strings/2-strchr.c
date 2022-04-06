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
	char *str;
	char st[100] = "nil";
	int i, j = 0;

	str = st;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				str[j] = s[i];
				j++;
				i++;
			}
			return (str);
		}
	}
	return (str);
}
