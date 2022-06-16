#include "main.h"

/**
* _strlen - length of string;
* @s : pointer
* Return: _strlen
*/

int _strlen(char *s)
{
	int strlen;

	strlen = 0;
	while (s[strlen] != '\0')
	{
		strlen++;
	}
return (strlen);
}

/**
* *_strncat - concat les string
* @dest: destitantion
* @src: source string
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = _strlen(dest);
	while (i < n)
	{
		dest[i + j] = src[i];
		i++;
	}
	if (n > _strlen(src))
	{
		dest[j + i] = 0;
	}
return (dest);
}
