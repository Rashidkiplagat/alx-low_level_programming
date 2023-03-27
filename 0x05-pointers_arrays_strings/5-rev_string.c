#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	if (s == NULL || *s == '\0')
	return;

	j = 0;
	while (s[j] != '\0')
	j++;

	j--;
	for (i = 0; i < j; i++, j--)
{
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
}
}
