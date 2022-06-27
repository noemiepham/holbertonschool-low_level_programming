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
	int p;
	int *ptr = &p;

	ptr = malloc(sizeof(p) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		*(ptr) = p;
	}
return (ptr);
}
