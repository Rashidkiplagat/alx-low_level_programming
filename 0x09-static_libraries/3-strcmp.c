#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: an integer greater than, equal to, or less than 0, according to
 * whether s1 is greater than, equal to, or less than s2, respectively.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
	if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
}

	return (s1[i] - s2[i]);
}
