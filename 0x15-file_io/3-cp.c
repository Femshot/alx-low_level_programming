#include "main.h"

/**
 * main - Point of entry of program
 * @arc: Number of arguments passed to program
 * @arg: Pointers to strings passed
 *
 * Return: 0 on succes
 */
int main(int arc, char *arg[])
{
	if (arc != 3 || arg == NULL)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	copy_files(arg[1], arg[2]);
	return (0);
}

/**
 * copy_files - A function to  copy text fromone file to another
 * @s: name of file to copy from
 * @t: name of file to  be copied to
 */
void copy_files(char *s, char *t)
{
	int fs, ft, rd, wr, len = 0;
	char buff[1024];

	while (s && s[len])
		len++;
	fs = open(s, O_RDONLY);
	if (fs < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(98);
	}
	ft = open(t, O_RDWR | O_TRUNC | O_CREAT, 00664);
	if (ft < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", t);
		exit(99);
	}
	while (rd)
	{
		rd = read(fs, buff, 1024);
		if (rd < 0)
		{
			error_handle(s, 1, fs, ft);
			exit(98);
		}
		else if (rd == 0)
			break;
		wr = write(ft, buff, rd);
		if (wr < 0)
		{
			error_handle(t, 2, fs, ft);
			exit(99);
		}
	}
	close_files(fs, ft);
}

/**
 * error_handle - A function to hadles error printing
 * @s: pointer to a filename
 * @i: type indicator
 * @fs: File descriptor
 * @ft: file descriptor
 */
void error_handle(char *s, int i, int fs, int ft)
{
	if (i == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		safe_close(fs);
		safe_close(ft);
	}
	else if (i == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		safe_close(fs);
		safe_close(ft);
	}
}
/**
 * safe_close - A function that closes a file safely, or prints error message
 * if failed.
 * @file: file descriptor
 *
 * Return: 1 on success, -1 on failure
 */
int safe_close(int file)
{
	int error;

	error = close(file);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	return (error);
}

/**
 * close_files - Afunction to close all opened file descriptors
 * @fs: File descriptor for refrence file
 * @ft: File descriptor for destination file
 */
void close_files(int fs, int ft)
{
	int err;

	err = safe_close(ft);
	if (err < 0)
	{
		safe_close(fs);
		exit(100);
	}
	err = safe_close(fs);
	if (err < 0)
		exit(100);
}
