#include "main.h"
#include <unistd.h>

/**
 * main - Multiples two positive numbers passed to  it
 * @argc: Count of arguments passed
 * @argv: Pointer to arguments passed
 *
 * Return: 0 if successful
 * On error, exit with status 98
 */
int main(int argc, char **argv)
{
	unsigned long int res = 0, mul = 1, j;
	int i;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		res = 0;
		for (j = 0; *(*(argv + i) + j); j++)
		{
			if (*(*(argv + i) + j) >= '0' && *(*(argv + i) + j) <= '9')
			{
				res = (res * 10 + *(*(argv + i) + j) - '0');
			}
			else
			{
				_puts("Error");
				exit(98);
			}
		}
		mul *= res;
	}

	print_number(mul);
	_putchar('\n');

	return (0);
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
void print_number(unsigned long int n)
{
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
