#include "main.h"

/**
 * _strlen - length of string
 * @s: string passed
 *
 * Return: length
 */
ssize_t _strlen(char *s)
{
	ssize_t len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}


/**
 * create_file - Create a file
 * @filename: Name of file to be created
 * @text_content: Content to write in file
 *
 * Return: 1 - on success
 *        -1 - on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t lettersWritten, lenOfContent;
	int fd; /* File Descriptor */

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	lenOfContent = _strlen(text_content);
	lettersWritten = write(fd, text_content, lenOfContent);
	if (lettersWritten == -1)
		return (-1);
	close(fd);
	return (1);
}
