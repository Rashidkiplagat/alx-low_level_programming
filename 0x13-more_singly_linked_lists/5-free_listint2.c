#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 -sets the head to NULL and frees listint_t.
 *
 * @head: Pointer to pointer to the first list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
	return;

	current = *head;
	while (current != NULL)
{
	temp = current;
	current = current->next;
	free(temp);
}

	*head = NULL;
}
