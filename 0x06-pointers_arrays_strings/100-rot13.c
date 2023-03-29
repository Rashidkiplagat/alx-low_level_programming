#include "main.h"

/**
 * rot13 - Encode a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: The encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
{
	for (j = 0; alphabets[j] != '\0'; j++)
{
	if (str[i] == alphabets[j])
{
	str[i] = rot13[j];
	break;
}
}
}
	return (str);
}
