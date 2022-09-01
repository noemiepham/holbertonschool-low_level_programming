#include <stdio.h>
/**
 * main - prime factor
 * Return: non void
 */
int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%li\n", n);
	return (0);
}
