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
	int wrd_cnt;

	if (str == NULL || *(str + 0) == '\0' || count_num_words(str) == 0)
		return (NULL);

	wrd_cnt = count_num_words(str);
	ptr = (char **)malloc((wrd_cnt + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);

	wrd_cnt = array_of_strings(str, ptr);
	if (wrd_cnt != 0)
	{
		for (; wrd_cnt == 0; wrd_cnt--)
			free(ptr[wrd_cnt]);
		free(ptr);
		return (NULL);
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
		if ((*(s + l - 1) == ' ' || i == 0) && *(s + l) != ' ')
			i++;
		l++;
	}
	return (i);
}
/**
 * array_of_strings - Creates copy of an array of strings in an allocated space
 * @str: Pointer to strings to be copied
 * @ptr: Pointer to allocated space to hold arrays
 *
 * Return: 0 if successful, else last index of space falied
 */
int array_of_strings(char *str, char **ptr)
{
	int i = 0, len = 0, j = 0, k;

	while (*(str + i))
	{
		if (*(str + i) != ' ')
			len++;
		if (*(str + (i - 1)) != ' ' && (*(str + i) == ' ' ||
			*(str + (i + 1)) == '\0') && i != 0)
		{
			ptr[j] = (char *)malloc((len + 1) * sizeof(char));
			if (ptr[j] == NULL)
				return (j);
			if (*(str + (i + 1)) == '\0' && *(str + i) != ' ')
				i++;
			for (k = 0; len > 0; k++, len--)
				ptr[j][k] = *(str + (i - len));
			ptr[j][k] = '\0';
			j++;
		}
		if (*(str + i) == '\0')
			break;
		i++;
	}
	ptr[j] = NULL;
	return (0);
}
