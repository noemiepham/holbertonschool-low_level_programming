#include "main.h"
#include "stdio.h"
/*
* File: 0. isupper
* Auth: NoémePHAM
*/

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 */

void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar(n + '0');
	n++;
	}
		_putchar('\n');
}
