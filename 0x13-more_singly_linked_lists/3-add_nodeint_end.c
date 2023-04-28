#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head node of the list.
 * @n: The integer to store in the new node.
 *
 * Return: If memory allocation fails or head is NULL, return NULL.
 *Otherwise, return the address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	if (!head)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	*head = new_node;
	else
{
	last_node = *head;
	while (last_node->next)
	last_node = last_node->next;
	last_node->next = new_node;
}

	return (new_node);
}