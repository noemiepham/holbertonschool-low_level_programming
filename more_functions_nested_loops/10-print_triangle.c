/*
*10. Triangles
* Auth: NoémePHAM
*/

#include "main.h"

/**
*print_triangle - prints a triangle
*@size: Number;
*/

void print_triangle(int size)
{
	int i;
	int l;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			l = 0;
			while (l < size - i)
			{
				_putchar(' ');
			l++;
			}
			while (l <= size)
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
