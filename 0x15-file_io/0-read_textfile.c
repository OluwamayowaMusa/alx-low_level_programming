#include "main.h"

/**
 * read_textfile - Reads and prints a text file to the POSIX standard output
 * @filename: File to read from
 * @letters: Number of letters to read and print
 *
 * Return: Actual number of letters read and printed
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
	if (text == NULL)
		return (0);
	lettersRead = read(fd, text, letters);
	lettersPrinted = write(1, text, lettersRead);
	close(fd);
	free(text);
	return (lettersPrinted);
}
