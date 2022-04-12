#include "main.h"
#include <stdio.h>

/**
 * _strspn - Get length of a prefix substring
 * @s: string to be scanned
 * @accept: string with matching characters
 *
 * Return: length of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		c = 'a';
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c = 'b';
				break;
			}
			j++;
		}
		if (c == 'a')
			return (i);

	}
	return (i);
}

/**
 * main - test function
 */
void main(void)
{
	char *s = "hello, world";
	char *f = "oleh";

	printf("%u\n", _strspn(s, f));
}
