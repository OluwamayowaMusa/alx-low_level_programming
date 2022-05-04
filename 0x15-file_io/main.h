#ifndef MAIN_H
#define MAIN_H

/* Header File */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/* Functions Prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filenaem, char *text_content);

#endif
