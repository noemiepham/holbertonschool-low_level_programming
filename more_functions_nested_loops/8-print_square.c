#include "main.h"
#include "stdio.h"
/*
* 8. You are so much sunshine in every square inch
* Auth: NoémePHAM
*/

/**
 * print_square - print a square
 * @size: size square
 * Return: Alway 0.
 */
void print_square(int size)
{
	int i;
	int l;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			l = 0;
			while (l < size)
			{
				_putchar(35);
			l++;
			}
		_putchar('\n');
		i++;
		}
	}
	else
	_putchar('\n');
}
