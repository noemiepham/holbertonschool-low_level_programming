#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - searches for a value in an array of integers
 * @array: array to search
 * @size:  number of elements in array
 * @value:  is the value to search for
 * Return: the first index where value is located
 *
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i <= size - 1; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
