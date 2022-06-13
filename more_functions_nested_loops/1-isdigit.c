#include "main.h"
#include "stdio.h"
/*
* File: 0. isupper
* Auth: NoémePHAM
*/

/**
 * _isdigit - Write a function that checks for uppercase character.
 * @c: number
 * Return: Alway 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
