#include "lists.h"
/**
* free_listint2 - free list
* @head: pointer to head
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
	}
}
