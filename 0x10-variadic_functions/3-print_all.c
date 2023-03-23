#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @args: Input argument
 */
void print_char(va_list args)
{
	putchar(va_arg(args, int));
}

/**
 * print_int -  Prints an Integer
 * @args: Input argument
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float -  Prints a float number
 * @args: Input argument
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string -  Prints a string
 * @args: Input argument
 */
void print_string(va_list args)
{
	printf("%s", va_arg(args, char *));
}

/**
 * print_all - Print Anything based on passed arguments
 * Description: c = char, i = int, f = float, s = char *
 * (if null print (nil))
 * @format: list of arg types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	fmt list[] = {
				{'c', print_char},
				{'i', print_int},
				{'f', print_float},
				{'s', print_string},
				};

	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (list[j].c == format[i])
			{
				list[j].f(args);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
