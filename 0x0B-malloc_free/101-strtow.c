#include "main.h"
#include <stdlib.h>

/**
 * word - Get number of words
 * @s: string passed
 *
 * Return: Number of words
 */
int word(char *s)
{
	int i, j;

	i = j = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == ' ' && *(s + i + 1) != ' ')
			j++;
		i++;
	}
	if (*s == ' ')
		j--;
	return (j);
}

/**
 * strtow - Splits string into words
 * @str: String passed
 *
 * Return: array of strings(words)
 */
char **strtow(char *str)
{
	char **ar;
	int no_of_words, i, j, k;

	if (str == NULL)
		return (NULL);
	no_of_words = word(str) + 1;
	ar = (char **) malloc(sizeof(char *) * (no_of_words + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (no_of_words + 1); i++)
	{
		*(ar + i) = (char *) malloc(sizeof(char) * 9);
		if (*(ar + i) == NULL)
			return (NULL);
	}
	i = 0;
	j = 0;
	if (*(str + j) == ' ')
		j = 1;
	while (i < no_of_words)
	{
		k = 0;
		while (str[j] != '\0' && str[j] != ' ')
		{
			*(*(ar + i) + k) = str[j];
			j++;
			k++;
		}
		*(*(ar + i) + k) = '\0';
		j++;
		i++;

	}
	*(ar + i) = NULL;
	return (ar);

}
