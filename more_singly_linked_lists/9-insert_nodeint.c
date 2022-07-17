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
	listint_t *current;
	listint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	if (new_node == NULL)
	return (NULL);
	current = *head;

	while (current != NULL)
	{
		if (count + 1 == idx)
		{
			new_node->next = current->next;
			current->next = new_node;
			current = NULL; /*arret la boucle */
		}
		else
		{
			current = current->next;
			count++;
		}
	}
return (*head);
}
