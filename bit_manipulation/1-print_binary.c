#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary number
 * @n : number to convert
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	printf("%lu", (n & 1));
}
