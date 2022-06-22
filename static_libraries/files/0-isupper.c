#include "main.h"
#include "stdio.h"
/*
* File: 0. isupper
* Auth: NoémePHAM
*/

/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: character
 * Return: Alway 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	return (0);
}
