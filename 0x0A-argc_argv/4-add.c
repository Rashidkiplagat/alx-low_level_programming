#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - checks if a string represents a positive number
 * @str: the string to check
 *
 * Return: 1 if the string represents a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] < '0' || str[i] > '9')
	return (0);
}

	return (1);
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
{
	if (!is_positive_number(argv[i]))
{
	printf("Error\n");
	return (1);
}

	sum += atoi(argv[i]);
}

	printf("%d\n", sum);

	return (0);
}
