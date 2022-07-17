#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: pointer to head
 * @index: is the index of the node that
 * should be deleted. Index starts at 0
 * Return: -1 si it fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *current;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (count < index && current->next != NULL)
	{
		tmp = current;
		current = current->next;
		count++;
	}
	if (count < index)
		return (-1);

	tmp->next = current->next;
	free(current);

	return (1);
}
