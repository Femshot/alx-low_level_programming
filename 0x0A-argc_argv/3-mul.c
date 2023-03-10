#include "main.h"

/**
 * main - Prints all arguments passed into it
 * @argc: Program argument counter
 * @argv: Program argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul *= _atoi(argv[i]);
	}
	else
	{
		_puts("Error");
		return (1);
	}
	print_num(mul);
	_putchar('\n');
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
 * _puts - Prints inputed string to stdout
 * @str: String to to printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
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
/**
 * _atoi - Converts an integar string into an integar
 * @s: Integar string to be converted
 *
 * Return: 0 if no intergar string found else integar number
 */
int _atoi(char *s)
{
	int sign = 1, num_end = 0;
	unsigned int total = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			num_end = 1;
			total = total * 10 + *s - '0';
		}
		else if (num_end)
			break;
		s++;
	}

	if (sign < 0)
		total = (-total);

	return (total);
}
