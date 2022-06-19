#include "main.h"

#include <stdio.h>

/**
 * print_diagsums - sum two matrix
 * @a: pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, j, h, n = 0, m = 0;

	for (i = 0; i < size; i++)
	{
		h = (i * size) + i;
		n += *(a + h);
	}
	for (j = 0; j < size; j++)
	{
		h = (j * size) + (size - 1 - j);
		m += *(a + h);
	}
	printf("%i, %i\n", n, m);
}
