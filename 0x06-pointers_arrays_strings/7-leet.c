#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Pointer to string of text to encrypt
 *
 * Return: Pointer to encrypted text string
 */
char *leet(char *str)
{
	char *ptr = str;
	char alp[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (*str == alp[j])
			{
				*str = leet[j];
			}
		}
		str++;
	}
	return (ptr);
}
