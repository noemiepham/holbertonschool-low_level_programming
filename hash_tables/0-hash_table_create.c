#include "hash_tables.h"
/**
 * hash_table_create - function to create hash-table
 * @size: is the size of the array
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table); /*error, free table before we return!*/
		return (NULL);
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}