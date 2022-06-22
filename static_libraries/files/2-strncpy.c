#include "main.h"
/**
* _strncpy - string copy;
* @dest : dest copy
* @src : source copy
* @n : size string
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
return (dest);
}
