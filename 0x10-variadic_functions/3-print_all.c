#include "variadic_functions.h"

/**
 * print_all - Print Anything based on passed arguments
 * Description: c = char, i = int, f = float, s = char *
 * (if null print (nil))
 * @format: list of arg types
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0;
	char *sep = ", ";
	char *str;

	va_start(valist, format);

	while (format[n] && format != NULL)
	{
		if (format[n + 1]  == '\0')
			sep = "";
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), sep);
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}
