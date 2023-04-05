#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of the number n, or -1 if n does not have a
 *         natural square root.
 */
int _sqrt_recursion(int n)
{
	/* Base case: */
	if (n < 0)
	return (-1);
	if (n == 0 || n == 1)
	return (n);

	/* Recursive case: */
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Calculates the natural square root of a number recursively
 * @n: The number to find the square root of
 * @i: The divisor to check the square root of n against
 *
 * Return: The natural square root of the number n, or -1 if n does not have a
 *         natural square root.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
	return (i);
	if (i * i > n)
	return (-1);

	return (sqrt_helper(n, i + 1));
}
