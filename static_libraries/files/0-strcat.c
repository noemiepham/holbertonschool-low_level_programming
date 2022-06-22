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
* *_strcat - concat les string
* @dest: destitantion
* @src: source string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = _strlen(dest);
	while (src[i])
	{
		dest[i + j] = src[i];
	i++;
	}
dest[j + i] = 0;
return (dest);
}

