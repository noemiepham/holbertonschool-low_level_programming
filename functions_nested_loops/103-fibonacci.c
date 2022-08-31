#include <stdio.h>
/**
 * main - print sum evan fibonacci
 * Return: non void
 *
 */

int main(void)
{
	unsigned long count, i, j, k, sum;

	j = 1;
	i = sum = 0;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
