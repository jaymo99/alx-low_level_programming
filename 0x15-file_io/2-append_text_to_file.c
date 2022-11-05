#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: the name of the file.
 * @text_content: NULL terminated string to add at teh end of the line.
 *
 * Return: on success, 1
 * on failure, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd,
		len = 0,
		i = 0,
		wr = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	/* length of string */
	while (text_content != NULL && text_content[i] != '\0')
	{
		len++;
		i++;
	}

	if (text_content != NULL)
	{
		wr = write(fd, text_content, len);
		if (wr < 0)
			return (-1);
	}

	return (1);
}
