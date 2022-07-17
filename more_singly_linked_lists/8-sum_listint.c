#include "lists.h"
/**
 * sum_listint - sum node
 * @head: pointer to head Null
 * Return: Sumary
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
