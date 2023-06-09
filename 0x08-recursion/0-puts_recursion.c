#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 *
 * return: 0 success
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
