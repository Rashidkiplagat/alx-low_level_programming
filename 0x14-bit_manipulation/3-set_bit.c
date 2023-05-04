#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index starting from 0 of a bit
 * Return: succeffull 1 ,or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	*n = *n | (1 << index);

	return (1);
}
