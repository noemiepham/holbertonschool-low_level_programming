#include "main.h"
/**
*reverse_array  - reverse string
* @a: string
* @n: number of elements of array
*/

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	n -= 1;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	i++;
	n--;
	}
}

