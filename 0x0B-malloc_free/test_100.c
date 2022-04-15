#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen_main - Length of all the arguments to main
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: total length of strings
 */
int _strlen_main(int argc, char **argv)
{
	int i, j, len, total = 0;

	for (i = 1; i < argc; i++)
	{
		len = 0;
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			len++;
		}
		total += len;
	}

	return (total);
}

/**
 * argstostr - Concatenate the arguments to the main with a '\n' between them
 * @ac:argument count
 * @av:argument vector
 *
 * Return: Concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, no_of_chars, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/*Total Length of the arguments to main*/
	no_of_chars = _strlen_main(ac, av);
	str = (char *) malloc(sizeof(char) * (no_of_chars + ac));
	if (str == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++, k++)
		{
			str[k] = *(av[i] + j);
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}

/**
 * main - test function
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0
 */
int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
		return (1);
	printf("%s", s);
	return (0);
}
