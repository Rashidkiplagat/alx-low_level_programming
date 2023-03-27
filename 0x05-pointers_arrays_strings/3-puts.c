#include "main.h"
/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the first character of the string.
 *
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
{
	putchar(*str);
	str++;
}
	putchar('\n');
}
