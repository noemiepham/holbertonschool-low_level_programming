#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 *
 * Return: pointer to newly allocated memory, or NULL if failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;
	char *oldptr = ptr;

	newptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (newptr);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (newptr == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
		newptr[i] = oldptr[i];
	free(ptr);
	return (newptr);
}
