#include "main.h"
#include "stdio.h"
/*
* File: 7. I feel like I am diagonally;
* Auth: NoémePHAM
*/

/**
 * print_diagonal - Write a function that checks for uppercase character.
 * @n : number
 */

void print_diagonal(int n)
{
	int i;
	int l;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			l = 0;
			while (l < n - (n - i))
			{
				_putchar(' ');
			l++;
			}
		_putchar(92);
		_putchar('\n');
		i++;
		}
	}
	else
	_putchar('\n');
}
