#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char *leet_str = str;
	char leet[] = "aAeEoOtTlL";
	char leet_enc[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
{
	for (j = 0; leet[j] != '\0'; j++)
{
	if (str[i] == leet[j])
{
	leet_str[i] = leet_enc[j];
}
}
}

	return (leet_str);
}
