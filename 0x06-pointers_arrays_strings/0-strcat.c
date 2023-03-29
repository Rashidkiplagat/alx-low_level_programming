#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Find the end of the dest string */
	i = 0;
	while (dest[i] != '\0')
{
	i++;
}

	/* Append the src string to the dest string */
	j = 0;
	while (src[j] != '\0')
{
	dest[i] = src[j];
	i++;
	j++;
}

	/* Add a terminating null byte */
	dest[i] = '\0';

	/* Return a pointer to the resulting string dest */
	return (dest);
}
