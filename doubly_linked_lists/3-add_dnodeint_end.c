#include "lists.h"
/**
 * add_dnodeint_end - function node the add
 * @head : pointer head NULL
 * @n :valer int
 * Return: Null
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
	}
	current_node->next = new_node;
	new_node->prev = current_node;
	new_node->next = NULL;
	return (new_node);
}
