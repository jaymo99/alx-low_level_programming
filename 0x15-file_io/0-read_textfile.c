#include "main.h"

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the std output.
 *
 * @filename: name of the file.
 * @letters: number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 * OR 0 if:
 * -> the file cannot be opened or read.
 * -> @filename is NULL.
 * -> write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		exit(1);

	read(fd, buf, letters);
	buf[letters] = '\0';

	count = write(STDOUT_FILENO, buf, letters);

	close(fd);
	free(buf);
	return (count);
}
