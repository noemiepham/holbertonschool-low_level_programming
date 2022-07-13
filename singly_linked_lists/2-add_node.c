 #include "lists.h"
#include <stdio.h>
/**
* add_node - add new node
* @head : pointer to head
* @str : pointer to valeur
* Return: string len
*/

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node; /* saving the address of first node */
	return (new_node);
}
