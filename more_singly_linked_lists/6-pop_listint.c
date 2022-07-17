#include "lists.h"
/**
 * pop_listint - delete node at the begining
 * @head : pointer to head
 * Return: current valeur
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int value;

	if (*head == NULL)
		value = 0;
	else
	{
		current = *head;
		*head = current->next;
		value = current->n;
		free(current);
	}
	return (value);
}
