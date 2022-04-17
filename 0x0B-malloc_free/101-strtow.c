#include "main.h"
#include <stdlib.h>

int word(char *s);
/**
 * split_string - split string into words
 * @str: String passed
 * @a: Address of array of words
 */
void split_string(char *str, char (*a)[][20])
{
	int i, j, k;
	int no_of_words;

	no_of_words = word(str) + 1;
	i = 0;
	j = 0;
	while (i < no_of_words)
	{
		k = 0;
		while (str[j] != ' ' && str[j] != '\0')
		{
			(*a)[i][k] = str[j];
			j++;
			k++;
		}
		if (k != 0)
		{
			(*a)[i][k] = '\0';
			i++;
		}
		j++;
	}
}

/**
 * _strlen - length of words
 * @i: position of word
 * @arr: array of words
 *
 * Return: length
 */
int _strlen(int i, char (*arr)[20])
{
	int len = 0;

	while (arr[i][len] != '\0')
		len++;
	return (len);
}

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
		{
			if (*(s + i + 1) != '\0')
				j++;
		}
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
	char **ar, a[30][20];
	int no_of_words, i, j, k;

	if (str == NULL)
		return (NULL);
	no_of_words = word(str) + 1;
	if (no_of_words == 1 || no_of_words == 0)
		return (NULL);
	ar = (char **) malloc(sizeof(char *) * (no_of_words + 1));
	if (ar == NULL)
		return (NULL);
	split_string(str, &a);
	for (i = 0; i < (no_of_words); i++)
	{
		*(ar + i) = (char *) malloc(sizeof(char) * (_strlen(i, a) + 1));
		if (*(ar + i) == NULL)
			return (NULL);
	}
	i = 0;
	j = 0;
	while (i < no_of_words)
	{
		k = 0;
		while (str[j] != '\0' && str[j] != ' ')
		{
			*(*(ar + i) + k) = str[j];
			k++;
			j++;
		}
		if (k != 0)
		{
			*(*(ar + i) + k) = '\0';
			i++;
		}
		j++;

	}
	*(ar + i) = NULL;
	return (ar);

}
