#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node
 * @head: pointer to head
 * @idx: is the index of the list where
 *       the new node should be added. Index starts at 0
 *@n: valeur new node
 *Return: new list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *previous;
	listint_t *current;
	listint_t *new_node;
	listint_t *inserted_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	previous = *head;
	current = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL)
	{
		if (count == idx)
		{

			previous->next = new_node;
			new_node->next = current;
			inserted_node = new_node;
		}
		else
		{
			previous = current;
			current = current->next;
		}
			count++;
	}

	if (idx > count)
	{
		return (NULL);
	}

return (inserted_node);
}
