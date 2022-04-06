#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string to a pointer
 * @dest: the pointer string is copied to
 * @src: the string to be copied
 * Return: Pointer
 */
char *_strcpy(char *dest, char *src)
{
	dest = src;
	return (dest);
}

/**
 * main - test function
 */
void main(void)
{
	char *str = "boy";
	char *str_;
	char *_str;

	_str = _strcpy(str_, str);
	printf("%s\n", str_);
	printf("%s\n", _str);
}
