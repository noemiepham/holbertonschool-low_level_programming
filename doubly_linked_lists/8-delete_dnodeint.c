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

	if (*head == NULL)
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
		cursor = cursor->next;
		i++;
	}
		if (i > index)
	{
		printf("index:%d%d", i, index);
		return (-1);
	}
		if (cursor->next == NULL)
			cursor->prev->next = NULL;
		else if (cursor->next != NULL)
		{
			cursor->prev->next = cursor->next;
			cursor->next->prev = cursor->prev;
		}
	free(cursor);
	return (1);
}
