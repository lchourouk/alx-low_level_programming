#ifndef M_H
#define M_H

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define READ_BUF_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *fillename, char *text_content);
int appen_text_to_file(const char *filename, char *text_content);
#endif
