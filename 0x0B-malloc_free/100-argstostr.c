#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: a pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j]; j++)
{
	len++;
}
	len++; /* for the newline character */
}

	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	return (NULL);

	/* Copy the arguments into the new string */
	for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j]; j++)
{
	str[index++] = av[i][j];
}
	str[index++] = '\n';
}
	str[index] = '\0';

	return (str);
}
