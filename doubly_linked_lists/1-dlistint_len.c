#include "lists.h"
/**
 * dlistint_len - print nombre node
 * @h: pointer to new node
 * Return: Nombre de node
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
