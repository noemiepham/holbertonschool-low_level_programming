#include "main.h"
#include <stdio.h>
/**
* print_chessboard - array a[i][j]
* @a: pointer row
* @'8': column
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	i++;
	_putchar('\n');
	}
}
