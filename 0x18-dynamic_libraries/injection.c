#include <unistd.h>

/**
 * puts - Write string to standard ouput
 * @s: String passed
 *
 * Return: Number of bytes written
 */
int puts(const char *s)
{
	write(STDOUT_FILENO, "Congratulations, you win the Jackpot!\n", 38);
	return (0);
}
