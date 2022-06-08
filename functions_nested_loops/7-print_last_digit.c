/*
* File: 7.print_last_digit(int)
* Auth: NoémePHAM
*/

#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
/**
 * print_last_digit - print the last digit of a number
 * @n: the number to be checked
 *
 * Return: int digit
 */

int print_last_digit(int n)

{
	n = n % 10;
	if (n < 0)
	{
		n = n * (-1);
		_putchar(n + '0');
		return (n);
	}
	_putchar(n + '0');
	return (n);
}
