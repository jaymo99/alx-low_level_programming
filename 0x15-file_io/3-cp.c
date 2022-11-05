#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * main - copies the content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int f_from,
		f_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	if (f_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (f_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy_content(f_from, f_to, argv[2]);

	/* close file descriptors */
	if (close(f_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	if (close(f_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}
	return (0);
}

/**
 * copy_content - copies content from one file descriptor to another.
 *
 * @f_from: file to copy content from.
 * @f_to: file to copy content to.
 * @file_to: Name of the file to copy content to.
 */
void copy_content(int f_from, int f_to, char *file_to)
{
	int rd, wr;
	char buf[1024];

	/* read the first 1024 bytes */
	rd = read(f_from, buf, 1024);
	while (rd != 0)
	{
		wr = write(f_to, buf, rd);
		if (wr < 0)
		{
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", file_to);
			exit(99);
		}

		/* read next 1024 bytes */
		rd = read(f_from, buf, 1024);
	}
}
