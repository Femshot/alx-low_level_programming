#include "main.h"

/**
 * strtow - Splits a string into words
 * @str: Pointer to string
 *
 * Return: Pointer to array of words, NULL if fail
 */
char **strtow(char *str)
{
	char **ptr;
	int i = 0, j = 0, k, l = 0;
	int wrd_cnt = 0, len = 0, fail = 0;

	if (str == NULL || *(str + 0) == '\0')
		return (NULL);
	while (*(str + l))
	{
		if (*(str + l - 1) == ' ' && *(str + l) != ' ')
			wrd_cnt++;
		l++;
	}
	ptr = (char **)malloc((wrd_cnt + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while (*(str + i))
	{
		if (*(str + i) != ' ')
			len++;
		if (*(str + (i - 1)) != ' ' && *(str + i) == ' ' && i != 0)
		{
			ptr[j] = (char *)malloc(len * sizeof(char));
			if (ptr[j] == NULL)
			{
				fail = 1;
				break;
			}
			for (k = 0; len > 0; k++, len--)
				ptr[j][k] = *(str + (i - len));
			j++;
		}
		i++;
	}
	ptr[j] = NULL;
	if (fail == 1)
	{
		for (; j == 0; j--)
			free((int *)ptr[j]);
		free(ptr);
	}
	return (ptr);
}
