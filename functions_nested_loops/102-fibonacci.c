#include <stdio.h>
/**
 * main - program to print 5à Fibonacci
 * Return: non void return
 */

int main(void)
{
	unsigned long count, i, j, k;

	i = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%u", k);
		if (count == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
