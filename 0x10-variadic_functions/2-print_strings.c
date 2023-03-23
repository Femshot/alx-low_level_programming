#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: Separator string between each printed string
 * @n: Number of string  passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list hob;
	char *str;
	unsigned int i;

	va_start(hob, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(hob, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(hob);
}
