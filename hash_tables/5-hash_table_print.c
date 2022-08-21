#include "hash_tables.h"
/**
 * hash_table_print  - a function that prints a hash table
 *
 * @ht: the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	unsigned long int i = 0;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (index == 0)
				index = 1;
			else
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
