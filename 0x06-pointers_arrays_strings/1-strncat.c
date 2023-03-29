#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
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
	while (src[j] != '\0' && j < n)
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
