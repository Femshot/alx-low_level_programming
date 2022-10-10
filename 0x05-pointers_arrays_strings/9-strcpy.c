/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;
	int i = 0;

	for (i = 0; src[i] <= '\0'; i++)
		dest[i] = src[i];
	return (aux);
}
