#include "lists.h"
#include <stdio.h>
/**
 * free_list - free memory statitic
 * @head: over of list
 */
void free_list(list_t *head)
{
	list_t *n;

	while ((n = head) != NULL)
	{
		head = head->next;
		free(n->str);
		free(n);
	}
}
