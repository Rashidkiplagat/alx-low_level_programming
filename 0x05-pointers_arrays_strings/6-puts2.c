#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: the string to print
 */
void puts2(char *str)
{
	int i;

	if (str == NULL || *str == '\0')
	return;

	for (i = 0; str[i] != '\0'; i += 2)
	_putchar(str[i]);

	_putchar('\n');
}
