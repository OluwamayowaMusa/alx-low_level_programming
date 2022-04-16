#include "main.h"
#include <stdlib.h>

/**
 * len_of_char_space - length of char and space
 * @str: String passed
 *
 * Return: number of letters
 */
int len_of_char_space(char *str)
{
	int i, j, k;

	i = j = k = 0;
	while (*(str + j) != '\0')
	{
		if (*(str + j) != ' ')
			i++;
		if (*(str + j) != ' ' && *(str + j + 1) == ' ')
		{
			if (*(str + j + 2) != 32)
				k++;
		}
		j++;
	}
	return (k);
}

/**
 * strtow - Splits a string into words
 * @str: String passed
 *
 * Return: array of strings(words)
 */
char **strtow(char *str)
{
	char **ptr;
	int i, no_of_words, j;

	no_of_words = len_of_char_space(str) + 1;
	ptr = (char **) malloc(sizeof(char *) * (no_of_words + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (no_of_words + 1); i++)
	{
		*(ptr + i) = (char *) malloc(sizeof(char) * 6);
		if (*(ptr + i) == NULL)
			return (NULL);
	}
	for (i = 0;  i < no_of_words; i++)
	{
		for (j = 0; j < 5; j++)
		{
			*(*(ptr + i) + j) = 'T';
		}
		*(*(ptr + i) + j) = '\0';
	}
	*(ptr + i) = NULL;
	return (ptr);
}
