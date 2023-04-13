#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 * @n: The maximum number of bytes from s2 to be concatenated
 *
 * Return: A pointer to the concatenated string on success
 *         NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_len = 0, s2_len = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	concat = malloc(sizeof(char) * (s1_len + n + 1));
	if (concat == NULL)
		return (NULL);

	for (; i < s1_len; i++)
		concat[i] = s1[i];
	for (; j < n; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0';

	return (concat);
}
