#include "lists.h"
/**
 * sum_dlistint - sum nodes
 *
 * @head: Pointer to node
 * Return: sumary
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
