#include "main.h"
#include  <stdio.h>


/**
 * cap_string - Capitalizes all words of a string
 * @s: String passed
 * Return: string
 */
char *cap_string(char *s)
{
	char *str;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				str = &s[i];
				*str  -= 32;
			}
		}
		else if ((s[i] == ' ' || s[i] == '\t') || (s[i] == '\n' || s[i] == ','))
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				str = &s[i + 1];
				*str -= 32;
			}
		}
		else if ((s[i] == ';' || s[i] == '.') || (s[i] == '!' || s[i] == '?'))
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				str = &s[i + 1];
				*str -= 32;
			}
		else if ((s[i] == '"' || s[i] == '(') || (s[i] == ')' || s[i] == '{'))
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				str = &s[i + 1];
				*str -= 32;
			}
		else if (s[i] == '}')
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				str = &s[i + 1];
				*str -= 32;
			}
	}
	return (s);
}

/**
 * main - test function
 */
void main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456789hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
}
