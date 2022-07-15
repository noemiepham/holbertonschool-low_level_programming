#include "lists.h"
/**
 * add_nodeint - function add list head
 * @head : pointer head NULL
 * @n :valer int
 * Return: Null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create a new node */
	listint_t *new_node =  malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	/* Make the newnode points to the head node */
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
