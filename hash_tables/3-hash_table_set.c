#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key
 * @value: is the value
 * Return: new node
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int idx;
	char *str;

	if (ht == NULL || key == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	if (value != NULL)
		str = strdup(value);
	else
		str = NULL;
	node = ht->array[idx];

	if (node == NULL)
		node = new_node(NULL);

	if ((node->key) != NULL)
	{
		ht->array[idx] = update_node(node, key, str);
		return (1);
	}

	node->key = strdup(key);
	node->value = str;
	node->next = NULL;

	ht->array[idx] = node;
	return (1);
}
