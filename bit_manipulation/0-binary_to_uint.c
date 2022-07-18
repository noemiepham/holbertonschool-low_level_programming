#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert to binay base 2
 * @b: pointer to string number
 * Return: numero convert
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int c;
	unsigned int len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
	{
		len++;
	}
	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
		return (0);
		if (b[c] == '1')
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}
