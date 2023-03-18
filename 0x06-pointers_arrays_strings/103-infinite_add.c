#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers as strings together
 * @n1: Pointer to first number
 * @n2: Pointer to second number
 * @r: Pointer to buffer where result willbe stored
 * @size_r: Size of buffer in r
 *
 * Return: Buffer where result was stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned long int len1 = 0, len2 = 0, num1 = 0, num2 = 0;
	unsigned long int add, dig = 0, div = 1, i, fig;

	while (*(n1 + len1))
		len1++;
	while (*(n2 + len2))
		len2++;
	if (size_r < (int)len1 || size_r < (int)len2)
		return (0);
	while (*n1)
		num1 = (num1 * 10) + (*n1++ - '0');
	while (*n2)
		num2 = (num2 * 10) + (*n2++ - '0');
	add = num1 + num2;
	while (add / div)
	{
		dig++;
		div *= 10;
	}
	if (size_r <= (int)dig)
		return (0);
	div /= 10;
	for (i = 0; div > 0; i++)
	{
		fig = add / div;
		*(r + i) = fig + '0';
		add %= div;
		div /= 10;
	}
	*(r + i) = '\0';
	return (r);
}
