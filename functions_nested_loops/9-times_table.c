/*
* File: 9 Times Table
* Auth: NoémePHAM
*/

#include "main.h"
#include <unistd.h>

/**
 * times_table - function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int n;
	int m;

	n = 0;
	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			if (n * m / 10 > 0)
			{
				_putchar((n * m / 10) + '0');
			}
				_putchar((n * m % 10) + '0');
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n * (m + 1) < 10 && ((m != 9) || (n != 0)))
				_putchar(' ');
		m++;
		}
	_putchar('\n');
	n++;
	}
}
