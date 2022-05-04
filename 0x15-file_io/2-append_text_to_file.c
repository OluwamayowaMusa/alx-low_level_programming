#include "main.h"

/**
 * _strlen - Length of string
 * @s: String passed
 *
 * Return: Length of string
 */
ssize_t _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return  (len);
}

/**
 * append_text_to_file - Append text at the end of file
 * @filename: Name of the file
 * @text_content: Content to be appended
 *
 * Return: 1 - On success
 *        -1 - On failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t lenOfContent, lettersWritten;
	int fd; /* File Descriptor */

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	lenOfContent = _strlen(text_content);
	lettersWritten  = write(fd, text_content, lenOfContent);
	if (lettersWritten == -1)
		return (-1);
	close(fd);
	return (1);
}
