/*
* 4. I can only go one way
* Auth: NoémePHAM
*/

#include "main.h"
#include <stdio.h>

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
* print_rev - reverse string
* _strlen - string leight
* @s: string
* Return : leight of string
*/

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
_putchar('\n');
}
