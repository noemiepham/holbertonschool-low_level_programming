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
	while (n <= 14)
	{
		if (n > 9)
		{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		}
		else
		_putchar(n + '0');
	n++;
	}
		_putchar('\n');
}

/**
* more_numbers - 10 times the numbers, from 0 to 14
 */



void more_numbers(void)
{
	print_numbers();
	print_numbers();
	print_numbers();
	print_numbers();
	print_numbers();
	print_numbers();
	print_numbers();
	print_numbers();
	print_numbers();
	print_numbers();
}
