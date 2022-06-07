#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	if (num > 0)
	{
		printf("%d is positive\n", num);
	}
	else if (num < 0)
	{
		printf("%d is negative\n", num);
	}
	else
	{
		printf("%d is zero\n", num);
	}
	return (0);
}
