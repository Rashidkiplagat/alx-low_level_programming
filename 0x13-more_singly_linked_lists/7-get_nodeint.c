#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node.
 * @head: pointer to the head node
 * @index: index of the node.
 *
 * Return: pointer to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	for (i = 0; current && i < index; i++)
		current = current->next;

	return (current);
}
