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

	current = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		i++;
	}

	if (new_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;
	
	return (new_node);
}
