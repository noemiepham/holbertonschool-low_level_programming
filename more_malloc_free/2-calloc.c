#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  space for count objectsfunction
 *@nmemb : This is the number of elements to be allocated
 *@size: this is size of element
 * Return: a pointer to the array, or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (0);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;
	return (array);
}
