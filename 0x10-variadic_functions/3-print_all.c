#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @arg: the va_list argument
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - prints an integer
 * @arg: the va_list argument
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints a float
 * @arg: the va_list argument
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - prints a string
 * @arg: the va_list argument
 */
void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
{
	printf("(nil)");
}
	else
{
	printf("%s", s);
}
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
{
	j = 0;
	switch (format[i])
{
	case 'c':
	print_char(args);
	break;
	case 'i':
	print_int(args);
	break;
	case 'f':
	print_float(args);
	break;
	case 's':
	print_string(args);
	break;
	default:
	j = 1;
	break;
}
	if (format[i + 1] != '\0' && !j)
{
	printf("%s", sep);
	sep = ", ";
}
	i++;
}
	va_end(args);

	printf("\n");
}
