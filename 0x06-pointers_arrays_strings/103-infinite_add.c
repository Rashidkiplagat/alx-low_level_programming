#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, lenr, carry, sum;
	char *p1, *p2, *pr;

	/* determine lengths of input strings */
	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	/* compute length of result string */
	lenr = len1 > len2 ? len1 + 1 : len2 + 1;
	if (lenr >= size_r)
		return (0);

	/* add numbers digit by digit */
	p1 = n1 + len1 - 1;
	p2 = n2 + len2 - 1;
	pr = r + lenr;
	carry = 0;
	*--pr = '\0';
	while (p1 >= n1 || p2 >= n2)
	{
		sum = carry;
		if (p1 >= n1)
			sum += *p1-- - '0';
		if (p2 >= n2)
			sum += *p2-- - '0';
		carry = sum / 10;
		*--pr = sum % 10 + '0';
	}
	if (carry)
		*--pr = carry + '0';

	return (pr);
}
