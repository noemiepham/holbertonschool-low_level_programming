#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range -  contain all the values from min (included) to max (included),
 * @min : min number
 * @max : max number
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array = NULL;
	int i, len;

	if (min > max)
		return (NULL);
	for (len = 0; len < (max - min); len++)
	;
	array = malloc(len * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = min;
	while (i <= max && i >= min)
	{
		array[i] = i;
		i++;
	}
return (array);
}
