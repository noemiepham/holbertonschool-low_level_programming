/*
* 8. Arrays are not pointers
* Auth: NoémePHAM
*/

#include <stdio.h>
/**
* print_array - print elements of an array;
* @a: pointer;
* @n: size of array,
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
		printf("%d, ", a[i]);
		else
		printf("%d", a[i]);
	i++;
	}
printf("\n");
}
