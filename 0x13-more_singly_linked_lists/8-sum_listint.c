#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - Computes the sum of all the elements.
 *
 * @head: Pointer to the first node.
 * Return: The sum of all the elements.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
{
	sum += head->n;
	head = head->next;
}

	return (sum);
}
