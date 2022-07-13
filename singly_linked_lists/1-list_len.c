#include "lists.h"
#include <stdio.h>
/**
* list_len - print list number len of array
* @h : pointer to list
* Return: string len
*/

size_t list_len(const list_t *h)
{
	int index = 0;

	while (h)
	{
		index++;
		h = h->next;
	}
	return (index);
}
