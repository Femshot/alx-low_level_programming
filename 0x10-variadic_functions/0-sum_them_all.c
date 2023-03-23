#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: Count off all arguments passed
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list bat;
	unsigned int i, sum = 0;

	va_start(bat, n);
	for (i = 0; i < n; i++)
		sum += va_arg(bat, unsigned int);
	va_end(bat);
	return ((int)sum);
}
