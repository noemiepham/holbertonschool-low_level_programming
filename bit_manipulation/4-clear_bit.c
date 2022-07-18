#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets bit to 0 at given index
 *
 * @n : pointer to long int
 * @index : index to set to 0
 * Return: 1 if succeed else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned long int valeur;

	size = sizeof((*n) * 8 - 1);
	if (index > size)
		return (-1);
	valeur = 1 << index;
	*n = *n & ~valeur;
	return (1);
}
