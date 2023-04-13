#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - Check if a string is a valid positive number.
 * @str: The string to check.
 *
 * Return: 1 if @str is a valid positive number, 0 otherwise.
 */
int is_valid_number(char *str)
{
	if (*str == '\0')
	return (0);
	while (*str != '\0')
{
	if (*str < '0' || *str > '9')
	return (0);
	str++;
}
	return (1);
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char **argv)
{
	int i, j, carry, len1, len2, *result;

	if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
{
	printf("Error\n");
	return (98);
}

	len1 = 0;
	while (argv[1][len1] != '\0')
	len1++;
	len2 = 0;
	while (argv[2][len2] != '\0')
	len2++;

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
{
	printf("Error\n");
	return (98);
}

	for (i = len1 - 1; i >= 0; i--)
{
	carry = 0;
	for (j = len2 - 1; j >= 0; j--)
	{
	carry += (argv[1][i] - '0') * (argv[2][j] - '0') + result[i + j + 1];
	result[i + j + 1] = carry % 10;
	carry /= 10;
}
	result[i] += carry;
}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
	i++;

	if (i == len1 + len2)
	putchar('0');
	else
{
	while (i < len1 + len2)
{
	putchar(result[i] + '0');
	i++;
}
}
	putchar('\n');

	free(result);

	return (0);
}
