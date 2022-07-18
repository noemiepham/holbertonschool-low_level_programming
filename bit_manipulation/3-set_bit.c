#include "main.h"
#include <stdio.h>
/**
 * set_bit - set binary at index bit 1
 * @n : pointer to number
 * @index: position
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned long int valeur;

	size = sizeof(*n) * 8 - 1;
	if (index > size)
		return (-1);
	valeur = 1 << index;

	*n = valeur | *n;
	return (1);
}
