#include "lists.h"
#include <stdio.h>
/**
* add_nodeint_end - print list number add the end
* @head: pointer to head list Null
* @n: valeur type int
* Return: une list complet
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	new_node->n = n;
	new_node->next = NULL;
	if (!new_node)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
			tmp->next = new_node;
	}
	return (new_node);
	/* retourn la list complete */
}


