#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - delete node at nth position
 * @head: pointer to head
 * @index: position to delete
 * Return: 1 if success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cursor;

	cursor = *head;
	if (head == NULL || *head == NULL)
		return (-1);

	while (i < index)
	{
		if (cursor == NULL)
			return (-1);
		cursor = cursor->next;
		i++;
	}

	if (index == 0)
	{
		*head = cursor->next;
		if (cursor->next != NULL)
			cursor->next->prev = NULL;
	}
	else
	{
		cursor->prev->next = cursor->next;
		if (cursor->next != NULL)
			cursor->next->prev = cursor->prev;
	}
	free(cursor);
	return (1);
}
