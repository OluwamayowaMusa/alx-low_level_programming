#include <stdio.h>
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
	char **ar;
	int no_of_words, i, j, k;

	if (str == NULL)
		return (NULL);
	no_of_words = word(str) + 1;
	if (no_of_words == 1 || no_of_words == 0)
		return (NULL);
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
	printf("%d\n", no_of_words);
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

/**
 * print_tab - print words in an array
 * @array: Array of words
 */
void print_tab(char **array)
{
	int i;

	for (i = 0; array[i] != NULL; i++)
	{
		printf("%s\n", array[i]);
	}
}

/**
 * main - test function
 * Return: 0
 */
int main(void)
{
	char **tab;

	tab = strtow("Talk is cheap. Show me the code.");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
