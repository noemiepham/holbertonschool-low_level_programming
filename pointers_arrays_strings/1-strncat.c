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
* @n: size copy
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = _strlen(dest);
	while (n >= 1)
	{
		dest[i + j] = src[i];
		i++;
	}
	if (n >= _strlen(src)/2)
	{
		dest[j + i] = 0;
	}
return (dest);
}
