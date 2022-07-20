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
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;

	if (*h == NULL)
	{
		*h = new_node;
		new_node->next = NULL;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		free(new_node);
		return (new_node);
	}

	current = *h;
	while (i < (idx - 1) && current->next != NULL)
	{
		current = current->next;
		i++;
	}
	if (i < idx - 1)
		return (NULL);
	tmp = current->next;
	new_node->next = current->next;
	new_node->prev = current;
	current->next = new_node;
	tmp->prev = new_node;
	return (new_node);
}
