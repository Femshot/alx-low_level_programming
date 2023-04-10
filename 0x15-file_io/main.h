#ifndef M_H
#define M_H

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_files(int fs, int ft);
int safe_close(int file);
void error_handle(char *s, int i, int fs, int ft);
void copy_files(char *s, char *t);

#endif
