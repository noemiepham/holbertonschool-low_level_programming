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
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current->next != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (current);
}
