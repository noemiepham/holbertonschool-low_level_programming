#include "lists.h"
#include <stdio.h>
/**
 * listint_len - fuction print len
 * @h: pointer to node
 * Return: nombre de len
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
