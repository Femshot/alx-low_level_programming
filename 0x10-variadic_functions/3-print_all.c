#include "variadic_functions.h"

/**
 * print_all - Print Anything based on passed arguments
 * Description: c = char, i = int, f = float, s = char *
 * (if null print (nil))
 * @format: list of arg types
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int n = 0;
	char *str;

	va_start(list, format);

	while (format != NULL && format[n])
	{
		switch (format[n])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		if ((format[n] == 'c' || format[n] == 'i' || format[n] == 'f' ||
				format[n] == 's') && format[(n + 1)] != '\0')
			printf(", ");
		n++;
	}
	printf("\n");
	va_end(list);
}
