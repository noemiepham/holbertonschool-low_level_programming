#include "main.h"
/**
 * flip_bits - flip to get from one numbet to another
 *
 * @n: number to get
 * @m: number to be get
 * Return:new number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned int s = n ^ m;

	while (s > 0)
	{
		count++;
		s = s & (s - 1);
	}
	return (count);
}
