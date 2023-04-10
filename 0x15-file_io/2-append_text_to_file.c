#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: Name of target file.
 * @text_content: String to append to target file.
 *
 * Return: 1 if succesful and -1 if fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fint, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (*(text_content + len))
		len++;
	fint = write(fd, text_content, len);
	close(fd);
	if (fint < 0)
		return (-1);
	return (1);
}
