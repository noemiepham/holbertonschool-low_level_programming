/*
* 1. Don't swap horses in crossing a stream
* Auth: NoémePHAM
*/

#include "main.h"

/**
* swap_int - Write a function that swaps the values of two integers.
* @a: pointer
* @b: pointer
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
