#include "main.h"
/**
* _strlen - string
*@s:string
*Return: strlen
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
* _strcmp - string comparer
* @s1: string 1
* @s2: string 2
* Return:s1 - s2
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		i++;
	}
return (*s1 - *s2);
}
