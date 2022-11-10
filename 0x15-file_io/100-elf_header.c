#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>

/**
 * main - Entry point
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int fd, rd, wr;
	char buf[1024];
	Elf64_Ehdr elf;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(0);
	}
	printf("size: %ld\n", sizeof(elf));
	return (0);
}
