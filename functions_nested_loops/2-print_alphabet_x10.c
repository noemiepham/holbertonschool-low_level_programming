/*
* File: 2. 10 x alphabet
* Auth: NoémePHAM
*/

#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - function that prints 10 itimes the alphabet
 */

void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
