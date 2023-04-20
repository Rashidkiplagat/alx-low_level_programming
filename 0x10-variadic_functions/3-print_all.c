#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_arg - prints an argument based on its type
 * @arg: the argument to print
 * @type: the type of the argument ('c', 'i', 'f', or 's')
 */
void print_arg(va_list arg, char type)
{
	switch (type)
{
	case 'c':
	printf("%c", va_arg(arg, int));
	break;
	case 'i':
	printf("%d", va_arg(arg, int));
	break;
	case 'f':
	printf("%f", va_arg(arg, double));
	break;
	case 's':
	{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	printf("(nil)");
	else
	printf("%s", s);
}
	break;
	default:

	break;
}
}

/**
 * print_all - prints any number of arguments based on a given format string
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char *str;
	int j;

	va_start(args, format);

	while (format && format[i])
{
j = 0;
	switch (format[i])
{
	case 'c':
	printf("%s%c", separator, va_arg(args, int));
	break;
	case 'i':
	printf("%s%d", separator, va_arg(args, int));
	break;
	case 'f':
	printf("%s%f", separator, va_arg(args, double));
	break;
	case 's':
		str = va_arg(args, char *);
	if (!str)
	str = "(nil)";
	printf("%s%s", separator, str);
	break;
	default:
	j = 1;
	break;
}
	if (j == 0)
	separator = ", ";
	i++;
}

	printf("\n");
	va_end(args);
}
