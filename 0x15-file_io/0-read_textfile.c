#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: Name of target file to be read
 * @letters: Number of characters to be read in target file
 *
 * Return: Number of succesful characters read and printed
 * On error - Return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num, sum;
	int fd = open(filename, O_RDONLY);
	char *str = NULL;

	if (fd < 0 || filename == NULL)
		return (0);
	str = malloc(sizeof(*str) * (letters));
	if (str == NULL)
		return (0);
	num = read(fd, str, letters);
	close(fd);

	sum = write(STDOUT_FILENO, str, num);
	if (sum != num || sum == 0)
		return (0);
	free(str);
	return (sum);
}
