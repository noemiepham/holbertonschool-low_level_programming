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
	i = 0;
	while (*(str + i)
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
_putchar('\n');
}
