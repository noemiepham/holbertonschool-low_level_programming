#include "main.h"
/**
* _memcpy - copy byte
* @dest : This is a pointer to the destination.
* @src : This is a pointer of data to be copied.
* @n : This is the number of bytes to be copied.
* Return: s.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
	i++;
	}
return (dest);
}
