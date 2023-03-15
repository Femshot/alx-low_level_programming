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
	wrd_cnt = count_num_words(str);
	if (wrd_cnt == 0)
		return (NULL);
	ptr = (char **)malloc((wrd_cnt + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while (*(str + i))
	{
		if (*(str + i) != ' ')
			len++;
		if (*(str + (i - 1)) != ' ' && *(str + i) == ' ' && i != 0)
		{
			ptr[j] = (char *)malloc((len + 1) * sizeof(char));
			if (ptr[j] == NULL)
			{
				fail = 1;
				break;
			}
			for (k = 0; len > 0; k++, len--)
				ptr[j][k] = *(str + (i - len));
			ptr[j][k] = '\0';
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
/**
 * count_num_words - Counts the number of words found in a string
 * @s: Pointer to string
 * Return:number of words found
 */
int count_num_words(char *s)
{
	int i = 0, l = 0;

	while (*(s + l))
	{
		if (*(s + l - 1) == ' ' && *(s + l) != ' ')
			i++;
		l++;
	}
	return (i);
}
