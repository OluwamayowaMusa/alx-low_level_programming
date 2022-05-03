#include "main.h"

/**
 * read_textfile - Reads a text file and prints to the POSIX standard output
 * @filename: Name of file
 * @letters: Amount of letters in file
 *
 * Return: The actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lettersPrinted;
	char *text;
	int fd;/* File descriptor*/

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0004);
	if (fd == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return  (0);
	lettersPrinted = read(fd, text, letters);
	if (lettersPrinted != (ssize_t)letters)
	{
		free(text);
		return (0);
	}
	text[letters] = '\0';
	printf("%s", text);
	free(text);
	return (lettersPrinted);
}
