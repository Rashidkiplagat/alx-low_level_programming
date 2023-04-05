#include "main.h"

/**
 * _is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * @len: the length of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int _is_palindrome(char *s, int len)
{
	if (len < 2)
	return (1);

	if (*s != *(s + len - 1))
	return (0);

	return (_is_palindrome(s + 1, len - 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0') /* get the length of the string */
	len++;

	return (_is_palindrome(s, len));
}
