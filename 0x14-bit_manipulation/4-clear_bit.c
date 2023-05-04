#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of bit to 0 in a given index
 * @n: pointer to the number
 * @index: indes from 0 of a bit
 * Return: succeessffull 1,or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
