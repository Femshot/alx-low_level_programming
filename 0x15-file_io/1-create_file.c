#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The filename to create
 * @text_content: A string to write to the file created
 *
 * Return: 1 on success, -1 if fail.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ff, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		len = 0;
	else
		while (*(text_content + len))
			len++;

	ff = write(fd, text_content, len);
	close(fd);
	if (ff < 0)
		return (-1);
	return (1);
}
