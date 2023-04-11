#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
{
	len = 0;
	while (av[i][len])
{
	len++;
}
	total_len += len;
}

	/* Add space for the newlines and the null terminator */
	total_len += ac;

	/* Allocate memory for the concatenated string */
	str = malloc(total_len * sizeof(char));
	if (str == NULL)
	return (NULL);

	/* Concatenate the arguments */
	len = 0;
	for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j]; j++)
{
	str[len] = av[i][j];
	len++;
}
	str[len] = '\n';
	len++;
}

	/* Add the null terminator */
	str[len] = '\0';

	return (str);
}
