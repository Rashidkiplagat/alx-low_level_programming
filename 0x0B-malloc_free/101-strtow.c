#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count number of words in string.
 * @str: String to count words of.
 *
 * Return: Number of words in string.
 */
int count_words(char *str)
{
	int i, count;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] == ' ')
	continue;
	count++;
	while (str[i] != ' ' && str[i] != '\0')
	i++;
}
	return (count);
}

/**
 * strtow - Split string into words.
 * @str: String to split into words.
 *
 * Return: Pointer to array of strings (words), or NULL if failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, num_words;

	if (str == NULL || str[0] == '\0')
	return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
	return (NULL);
	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
	return (NULL);
	for (i = 0, j = 0; i < num_words; i++)
{
	while (str[j] == ' ')
		j++;
	len = 0;
	while (str[j + len] != ' ' && str[j + len] != '\0')
		len++;
	words[i] = malloc(sizeof(char) * (len + 1));
	if (words[i] == NULL)
{
	for (k = 0; k < i; k++)

		{
	free(words[k]);
		}
	free(words);

	return (NULL);
}
	for (k = 0; k < len; k++)
	words[i][k] = str[j++];
	words[i][k] = '\0';
}
	words[i] = NULL;
	return (words);
}
