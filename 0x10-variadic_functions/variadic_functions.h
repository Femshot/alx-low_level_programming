#ifndef VAR_H
#define VAR_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

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

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);
void (*check(char s))(va_list);

#endif
