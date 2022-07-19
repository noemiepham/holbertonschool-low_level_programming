#include "lists.h"
/**
 * print_dlistint - display double list
 * @h: pointer to node
 * Return: index nombre node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int index = 0;

	while (h)
	{
		if (h != NULL)
		printf("%d\n", h->n);
		index++;
		h = h->next;
	}
	return (index);
}
