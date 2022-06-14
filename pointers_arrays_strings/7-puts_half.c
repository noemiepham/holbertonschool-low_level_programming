/*
* 7. Winning is only half of it. Having fun is the other half
* Auth: NoémePHAM
*/

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
* puts_half - function that prints half of string
* @str: string
*/

void puts_half(char *str)
{
	int i;
	int j;

	j = 0;
	i = _strlen(str) / 2;
	while (j < i)
	{
		_putchar(str[j + i]);
		if ((_strlen(str) % 2) != 0)
			_putchar((_strlen(str) - 1) / 2);
	j++;
	}
_putchar('\n');
}
