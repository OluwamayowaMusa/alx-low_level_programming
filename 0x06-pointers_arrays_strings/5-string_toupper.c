#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @s: String passed
 * Return: string
 */
char *string_toupper(char *s)
{
	char *str;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			str = &s[i];
			*str -= 32;
		}
	}
	return (s);
}
