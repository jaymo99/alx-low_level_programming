#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>

int _putchar(char c);

/* main functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* helper functions */
void copy_content(int f_from, int f_to, char *file_from, char *file_to);

#endif /* MAIN_H */

