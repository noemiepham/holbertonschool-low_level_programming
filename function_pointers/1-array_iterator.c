#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes a func given as a param on each element of array
* @array: array to executes
* @size: size of array
* @action: pointer to the function
* Return : void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	int result;

	if (array != NULL && actioon != NULL)
	{
		for (i = 0; i < size; i++)
		{
			result = action(array[i]);
		}
	}
}
