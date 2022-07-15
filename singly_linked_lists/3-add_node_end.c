 #include "lists.h"
#include <stdio.h>
/**
* add_node_end - add new node at the end the la list
* @head : pointer to head
* @str : pointer to valeur
* Return: string len
*/

list_t *add_node_end(list_t **head, const char *str)
{
	/* create a new node */
	size_t len = 0;
	list_t *new_node;
	list_t *tmp = *head;

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
	/* if head is NULL, it is an empty list */
	if (*head == NULL)
		*head = new_node;
	/*Otherwise, find the last node and add the newNode*/
	else
	{
		/*last node's next address will be NULL*/
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		/* add the newNode at the end of the linked list */
		tmp->next = new_node;
	}
	return (*head);
}

