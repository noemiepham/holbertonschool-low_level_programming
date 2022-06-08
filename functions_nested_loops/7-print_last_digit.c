/*
* File: 7.print_last_digit(int)
* Auth: NoémePHAM
*/

#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * print_last_digit - print the last digit of a number
 * @n: the number to be checked
 *
 * Return: int digit
 */

int print_last_digit(int n)

{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	n = n % 10;
	return (n);
}
