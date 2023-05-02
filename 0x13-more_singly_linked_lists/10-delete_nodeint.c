#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at the index of listint_t.
 * @head: double pointer to the head node
 * @index: index of the node to be deleted
 *
 * Return:successful 1,if failed -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i;

	if (*head == NULL)
	return (-1);

	if (index == 0)
{
	current = *head;
	*head = (*head)->next;
	free(current);
	return (1);
}

	prev = *head;
	current = prev->next;
	for (i = 1; current != NULL && i < index; i++)
{
	prev = current;
	current = current->next;
}

	if (current != NULL)
{
	prev->next = current->next;
	free(current);
	return (1);
}

	return (-1);
}
