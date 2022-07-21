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

	if (head == NULL || *head == NULL)
		return (-1);

	cursor = *head;
	if (index == 0)
	{
		if (cursor->next != NULL)
		{
			*head = cursor->next;
			(*head)->prev = NULL;
		}
		else
			(*head) = NULL;
		free(cursor);
		return (1);
	}
	while (cursor->next != NULL)
	{
		if (i < index - 1)
		{
			if (cursor->next == NULL)
				cursor->prev->next = NULL;
			else if (cursor->next != NULL)
			{
				cursor->prev->next = cursor->next;
				cursor->next->prev = cursor->prev;
			}
		}
		else
			return (0);
		cursor = cursor->next;
		i++;
	}
	return (1);
}
