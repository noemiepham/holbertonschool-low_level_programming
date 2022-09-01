#include <stdio.h>
#include "main.h"
/**
 * print_number - print integer
 * @n: number to print
 * Return: non void
 */
void print_number(int n)
{
	int i = 48;

	if (n < 0)
	{
		_putchar(45);
		if (n < -9)
		{
			print_number(n / -10);
		}
			_putchar(i - n % 10);
	}
	else
	{
		if (n > 9)
		{
			print_number(n / 10);
		}
		_putchar(n % 10 + i);
	}
}
