#include "search.h"
#include <stdio.h>
/**
 * binarysearch - search recursively for a value
 * @array: a pointer to the first element
 * @left: the starting index
 * @right: the ending of index
 * @value: value to search for
 * Return: index where the value is located or - 1 if array is null
 */
int binarysearch(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right < left)
	{
		return (-1);
	}

	printf("Searching in array: ");
	for (mid = left; mid < right; mid++)
	{
		printf("%d, ", array[mid]);
	}
	printf("%d\n", array[mid]);

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		return (mid);
	}
	if (array[mid] < value)
	{
		return (binarysearch(array, mid + 1, right, value));
	}
	else
	{
		return (binarysearch(array, left, mid - 1, value));
	}
}
/**
 * binary_search - for value in a sorted array
 *
 * @array: a pointer to the first element
 * @size: lengt of array
 * @value: The value to search for
 *
 * Return: index where the value is located or - 1 if array is null
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || value == 0)
	{
		return (-1);
	}
	return (binarysearch(array, 0, size - 1, value));
}
