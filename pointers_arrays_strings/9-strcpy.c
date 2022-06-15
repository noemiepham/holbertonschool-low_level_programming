/*
* 9. strcpy
* Auth: NoémePHAM
*/

#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
* *_strcpy - coppy string
* @dest: destination
* @src: source
* Return: file coppied
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int size;

	size = _strlen(src);
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
	i++;
	}
return (dest);
}
