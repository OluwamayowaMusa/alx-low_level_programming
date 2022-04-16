#include <stdio.h>

/**
 * is_alphabet - Checks if character is an aplhabet
 * @c: Character passed
 *
 * Return: 1 - if alphabet
 *         0 - otherwise
 */
int is_alphabet(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if ( c == '.')
		return (1);
	return (0);
}


/**
 * word - get word
 * @str: string passed
 * @s: String returned
 * Return: String
 */
char *word(char *s, char *str)
{
	int i, j;

	for (i = 0, j = 0; str[i]; i++, j++)
	{
		if (is_alphabet(str[i]))
			s[j] = str[i];
		if (str[i] == ' ' && is_alphabet(str[i + 1]))
			s[j] = '9';

	}
	s[j] = '\0';
	return (s);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	char str[98];
	char *s;

	s = word(str, "Talk is cheap. Show me the code.");
	printf("%s\n", s);
}
