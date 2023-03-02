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
	char alp[5][2] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[5] = {'4', '3', '0', '7', '1'};
	int i, j;

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 2; j++)
			{
				if (*str == alp[i][j])
				{
					*str = leet[i];
				}
			}
		}
		str++;
	}
	return (ptr);
}
