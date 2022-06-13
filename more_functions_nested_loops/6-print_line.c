#include "main.h"
#include "stdio.h"
/*
* File: 0. isupper
* Auth: NoémePHAM
*/

/**
 * print_line - draws a straight line;
 * @n : number;
 * Return: Alway 0.
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		if (i != 0)
		_putchar(95);
		i++;
	}
_putchar('\n');
}
