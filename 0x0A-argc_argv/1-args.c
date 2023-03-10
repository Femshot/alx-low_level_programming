#include "main.h"

/**
 * main - Prints number of arguments passed into it excluding program name
 * @argc: Program argument counter
 * @argv: Program argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc && *argv[0] != '\0'; i++)
		print_number(i);
	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_number - prints an integer n
 *@n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}
