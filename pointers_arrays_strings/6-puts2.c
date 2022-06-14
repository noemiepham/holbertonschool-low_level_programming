/*
*6. Half the lies they tell about me aren't true
* Auth: NoémePHAM
*/

#include "main.h"

/**
* puts2 - Write a function that prints every other character of a string
* @str : string
*/

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	i++;
	}
_putchar('\n');
}

