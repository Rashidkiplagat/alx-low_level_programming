#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: A pointer to the head node
 * @idx: The index of the list where the new node is added.
 * @n:data for the new node.
 *
 * Return: If the function fails return NULL.
 *Otherwise the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	unsigned int node_idx = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;

	if (idx == 0)
{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

	while (node_idx < idx - 1)
{
	if (!tmp)
{
	free(new_node);
	return (NULL);
}

	tmp = tmp->next;
	node_idx++;
}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
