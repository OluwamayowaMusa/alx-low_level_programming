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
	ssize_t lettersPrinted, lettersRead, fd;
	char *text;

	if (filename == NULL)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	lettersRead = read(fd, text, letters);
	lettersPrinted = write(2, text, lettersRead);

	if (fd == -1 || lettersRead == -1 || lettersPrinted == -1
			|| lettersPrinted != lettersRead || 
			lettersPrinted != letters)
	{
		free(text);
		return (0);
	}
	free(text);
	close(0);

	return (lettersPrinted);
}
