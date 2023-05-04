#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - convets binary to unsigned int
 *
 * @b: pointer to a string of 1 and 0 character
 * Return:the convertd number or 0 if ther is one or more chars in the string
 * b that is not 0 or 1
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			num = (num << 1) + (b[i] - '0');
		else
			return (0);
	}

	return (num);
}
