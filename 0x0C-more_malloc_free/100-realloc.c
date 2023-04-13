#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
	return (ptr);

	if (!ptr)
{
	new_ptr = malloc(new_size);
	if (!new_ptr)
	return (NULL);

	return (new_ptr);
}

	if (!new_size)
{
	free(ptr);
	return (NULL);
}

	new_ptr = malloc(new_size);
	if (!new_ptr)
	return (NULL);

	if (new_size < old_size)
	old_size = new_size;

	memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);
}
