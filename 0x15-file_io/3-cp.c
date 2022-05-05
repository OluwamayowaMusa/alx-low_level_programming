#include "main.h"

/**
 * copy_file - Copy file content from one file to another
 * @filename1: First File
 * @filename2: Second File
 *
 * Return: 1 - on success
 *        -1 - on failure
 */
int copy_file(char *filename1, char *filename2)
{
	ssize_t lettersRead, lettersWritten;
	char buf[1024]; /* Buffer */
	int fd1, fd2, fd1Close, fd2Close; /* File Descriptors */

	if (filename1 == NULL || filename2 == NULL)
		return (-1);
	fd1 = open(filename1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				filename1);
		exit(98);
	}
	fd2 = open(filename2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				filename2);
		exit(99);
	}
	while ((lettersRead = read(fd1, buf, 1024)) > 0)
	{
		lettersWritten = write(fd2, buf, lettersRead);
		if (lettersWritten == -1)
			return (-1);
	}
	fd1Close = close(fd1);
	fd2Close = close(fd2);
	if (fd1Close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (fd2Close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (1);

}

/**
 * main - test function
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
