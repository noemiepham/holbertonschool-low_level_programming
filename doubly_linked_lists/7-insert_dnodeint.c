#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @idx: point to insert node
 * @n: data
 * @h: pointer to head
 * Return: nth node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));
	current = *h;
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL || h == NULL)
	{
		*h = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	while (i < (idx - 1))
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		i++;
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	else
	{
		new_node->prev = current;
		new_node->next = current->next;
		current->next->prev = new_node;
		current->next = new_node;
	}
	return (new_node);
}
