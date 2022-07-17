#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to head
 * @index: point to get node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	current = head;
	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (current);
}
