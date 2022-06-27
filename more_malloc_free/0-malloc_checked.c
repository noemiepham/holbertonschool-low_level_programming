#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - a pointer to the allcocated memory
* @b :number
* Return: malloc pointer
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
