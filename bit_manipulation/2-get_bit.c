#include "main.h"
#include <stdio.h>

/**
 * get_bit - the value of a bit at a given index
 * @n: number
 * @index: starting from 0 of the bit you want to get
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = 0;

	size = (sizeof(n) * 8) - 1;

	if (index > size)
		return (-1);
	return ((n >> index) & 1);
/* n>>index ~ n/2^index */
/* n & 1 ~ n%2 */
}
