 #include "lists.h"
#include <stdio.h>
/**
* add_node_end - add new node at the end node
* @head : pointer to head
* @str : pointer to valeur
* Return: string len
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node;
	list_t *last_node = NULL;

	last_node = *head;
	new_node = malloc(sizeof(list_t)); /* allocating memory */
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	new_node->len = len; /* assigning the value of date */
	new_node->str = strdup(str);
	new_node->next = NULL;
	*head = new_node; /* saving the address of first node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	return (new_node);
}


