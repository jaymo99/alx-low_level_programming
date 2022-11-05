#include "main.h"
#include <fcntl.h>

/**
 * create_file - creates a file.
 *
 * @filename: name of the file to be created.
 * @text_content: NULL terminated string to be written in the file.
 *
 * Return: on success, 1
 * on failure, -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd,
		i = 0,
		len = 0,
		count = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 00600);
	if (fd < 0)
		return (-1);

	/* length of text_content */
	while (text_content != NULL && text_content[i] != '\0')
	{
		len++;
		i++;
	}

	count = write(fd, text_content, len);
	if (count < 0)
		return (-1);

	return (1);
}
