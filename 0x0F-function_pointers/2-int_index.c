#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: the size of the array
 * @cmp: the function to use to compare values
 *
 * Return: the index of the first element and return 0,
 *         or -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
