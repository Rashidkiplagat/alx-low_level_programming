#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - Frees linked list and sets head to NULL
 *
 * @h: Pointer to a pointer to the head node
 *
 * Return: the size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *tmp;
	int diff;

	if (h == NULL || *h == NULL)
	return (0);

	current = *h;
	while (current != NULL)
{
	diff = current - current->next;
	if (diff > 0)
{
	tmp = current;
	current = current->next;
	free(tmp);
	size++;
}
	else
{
	printf("-> [%p] %d\n", (void *)current, current->n);
	*h = NULL;
	size++;
	break;
}
}

	return (size);
}
