#include "lists.h"
#include <stdio.h>
/**
* print_listint - print list node
* @h: pointer list node
* Return: nombre de string
*/
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h != NULL)
			printf("%d\n", h->n);
		h = h->next;
		i++;
	}
return (i);
}
