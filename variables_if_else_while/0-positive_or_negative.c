#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	if (n > 0)
		printf("%u is positive \n", n);
	else if (n == 0)
		printf("%u is zero \n", n);
	else
		printf("%u is negative \n", n);

	return (0);
}
