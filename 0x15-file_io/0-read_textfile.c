#include "main.h"

/**
 * read_textfile - Reads a text file and prints to the POSIX standard output
 * @filename: Name of file
 * @letters: Amount of letters in file
 *
 * Return: The actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters, 00400)
{
	ssize_t lettersPrinted, index = 0;
	char *text;
	int fd;/* File descriptor*/

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return  (0);
	lettersPrinted = read(fd, text, letters);
	if (lettersPrinted != (ssize_t)letters)
		return (0);
	for (index = 0; index <= lettersPrinted; index++)
	{
		_putchar(text[index]);
	}
	return (lettersPrinted);
}
