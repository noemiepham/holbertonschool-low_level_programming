#include "function_pointers.h"
#include <stdio.h>
/**
* int_index - searches for an integer
* @array : pointer to array
* @size: is the number of elements in the array
* @cmp: pointer to the function
* Return: first index for which cmp doesn't return 0, or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int r = 0;
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r != '\0')
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
