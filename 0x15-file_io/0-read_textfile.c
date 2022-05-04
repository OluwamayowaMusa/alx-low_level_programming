#include "main.h"

/**
 * read_textfile - Reads a textfile and prints it to the POSIX standard output
 * @filename: Name of file read from
 * @letters: Number of letters it should read and print
 *
 * Return: Number of letterrrs read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lettersPrinted, lettersRead;
	char *text;
	int fd; /* File Descriptor */

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL) /* Handelled malloc returned */
		return (0);
	lettersRead = read(fd, text, letters);
	if (lettersRead == -1)
	{
		free(text);
		return (0);
	}
	lettersPrinted = write(STDOUT_FILENO, text, lettersRead);
	if (lettersPrinted == -1 ||
			lettersRead != lettersPrinted)
	{
		free(text);
		return (0);
	}
	close(fd);
	free(text);
	return (lettersPrinted);
}
