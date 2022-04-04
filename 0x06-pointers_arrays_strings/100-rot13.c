#include "main.h"

/**
 * other_char - Check for characters
 * @c: character
 * @p: pointer to the character
 */
void other_char(char c, char *p)
{
	if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
	{
		*p -=13;
	}
}

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
		else
		{
			other_char(s[i], &s[i]);
		}
	}
	return (s);
}
