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
	ssize_t lettersPrinted, lettersRead;
	char *text;
	int fd;/* File descriptor*/

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0004);
	if (fd == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);
	lettersRead = read(fd, text, letters);
	if (lettersRead == -1)
	{
		free(text);
		return (0);
	}
	lettersPrinted = write(STDOUT_FILENO, text, lettersRead);
	if (lettersPrinted == -1)
	{
		free(text);
		return (0);
	}
	if (lettersPrinted != lettersRead)
	{
		free(text);
		return (0);
	}
	free(text);
	close(fd);
	return (lettersPrinted);
}
