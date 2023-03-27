#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* skip white space */
	while (s[i] == ' ')
{
	i++;
}

	/* check for sign */
	if (s[i] == '-')
{
	sign = -1;
	i++;
}
	else if (s[i] == '+')
{
	sign = 1;
	i++;
}

	/* convert string to integer */
	while (s[i] != '\0')
{
	if (s[i] < '0' || s[i] > '9')
{
	break;
}

	result = result * 10 + (s[i] - '0');

	i++;
}

	return (sign * result);
}
