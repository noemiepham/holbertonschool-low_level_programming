#include "main.h"
/**
* _memset - repeat character
* @s : This is a pointer to the block of memory to fill.
* @b : This is the value to be set.
* @n : This is the number of bytes to be set to the value.
* Return: s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
	i++;
	}
return (s);
}
