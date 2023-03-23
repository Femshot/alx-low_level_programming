#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a newline
 * @separator: Separator to print after each number
 * @n: Number of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list to;
	unsigned int i;

	va_start(to, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(to, unsigned int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(to);
}
