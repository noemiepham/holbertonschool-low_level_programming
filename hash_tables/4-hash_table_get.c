#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 *
 * @ht:  is the hash table you want to look into
 * @key:  is the key you are looking for
 * Return: table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht_size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node);

		node = node->next;
	}
	return (NULL);
}
