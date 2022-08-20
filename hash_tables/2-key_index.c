#include "hash_tables.h"
/**
 * key_index - calcul key index
 * @key: to be get index
 * @size: size of the hash table
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
