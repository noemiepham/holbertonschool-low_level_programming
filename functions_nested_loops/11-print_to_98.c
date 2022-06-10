/*
 * File: 11-print_to_98.c
 * Auth: NoemiePham
 */

#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */

void print_to_98(int n)
{
	int i;
	i = n;

	if (n <= 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			printf(", ");
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			printf(", ");
			i--;
		}
	};
printf("\n");
}
