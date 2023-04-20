#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @arg: the va_list argument
 *
 * Return: success 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c_val;
	int i_val;
	float f_val;
	char *s_val;
	int i, j;

	i = 0;
	va_start(args, format);
	while (format && format[i])
{
	j = 1;
	switch (format[i])
{
	case 'c':
		c_val = va_arg(args, int);
		printf("%c", c_val);
		break;
	case 'i':
		i_val = va_arg(args, int);
		printf("%d", i_val);
		break;
	case 'f':
		f_val = va_arg(args, double);
		printf("%f", f_val);
		break;
	case 's':
		s_val = va_arg(args, char *);
		if (!s_val)
		printf("(nil)");
		else
			printf("%s", s_val);
		break;
		default:
		j = 0;
		break;
}
	if (format[i + 1] && j)
		printf(", ");
	i++;
	}
	va_end(args);
	printf("\n");
}
