#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/** Similar to 3-print_all_2.c but trimmed away one excessive function*/

/**
 * struct frmt - Struct for print_all function
 * @c: A character
 * @f: Pointer to function tht takes one argument
 */
typedef struct frmt
{
	char c;
	void (*f)(va_list);
} fmt;

/**
 * print_char - Prints a character
 * @args: Input argument
 */
void print_char(va_list arg)
{
	putchar(va_arg(arg, int));
}

/**
 * print_int -  Prints an Integer
 * @args: Input argument
 */
void print_int(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
 * print_float -  Prints a float number
 * @args: Input argument
 */
void print_float(va_list g)
{
	printf("%f", va_arg(g, double));
}

/**
 * print_string -  Prints a string
 * @args: Input argument
 */
void print_string(va_list ar)
{
	printf("%s", va_arg(ar, char *));
	printf(" YAY!!!!");
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
	fmt list[] = {{'c', print_char}, {'i', print_int}, {'f', print_float},
	{'s', print_string}, {'d', print_int}};

	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 5)
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
	va_end(args);
	putchar('\n');
}

int main(void)
{
    print_all("ceisd", 'B', 3, "stSchool", 10);
    return (0);
}
