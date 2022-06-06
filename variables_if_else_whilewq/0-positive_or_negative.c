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
		printf("%ud is positive \n", n);
	else if (n == 0)
		printf("%ud is zero \n", n);
	else
		printf("%ud is negative \n", n);

	return (0);
}
