/*
* File: 2. 10 x alphabet
* Auth: NoémePHAM
*/

#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 itimes the alphabet
 */

void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		char letter;

		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	_putchar('\n');
	i++;
	}
}
