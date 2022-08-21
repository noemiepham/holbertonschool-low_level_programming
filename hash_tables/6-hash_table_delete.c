#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table.
 *
 * @ht: table to be delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node1;
	hash_node_t *node2;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node1 = ht->array[i];
		while (node1 != NULL)
		{
			node2 = node1->next;
			free(node1->key);
			free(node1->value);
			free(node);
			node1 = node2;
		}
	}
	free(ht->array);
	free(ht);
}
