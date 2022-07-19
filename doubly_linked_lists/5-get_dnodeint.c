#include "lists.h"
/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: pointer to head
 * @index: position to get node
 * Return: node to be get
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		i++;
		current = current->next;
	}
	return (current);
}
