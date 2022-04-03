#include "main.h"
#include <stdio.h>

/**
 * char_toupper - Change lowercase to uppercase
 * @c: character
 */
void char_toupper(char *c)
{
	*c -= 32;
}

/**
 * cap_string - Capitalizes all words of a string
 * @s: String passed
 * Return: string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				char_toupper(&s[i]);
		}
		else if ((s[i] == ' ' || s[i] == '\t') || (s[i] == '\n' || s[i] == ','))
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				char_toupper(&s[i + 1]);
		}
		else if ((s[i] == ';' || s[i] == '.') || (s[i] == '!' || s[i] == '?'))
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				char_toupper(&s[i + 1]);
		}
		else if ((s[i] == '"' || s[i] == '(') || (s[i] == ')' || s[i] == '{'))
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				char_toupper(&s[i + i]);
		}
		else if (s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				char_toupper(&s[i + 1]);
		}
	}
	return (s);
}

/**
 * main - test function
 */
void main(void)
{
	char str[] = "expect the best";
	char *ptr;

	ptr = cap_string(str);
	printf("%s\n", ptr);
	printf("%s\n", str);
}
