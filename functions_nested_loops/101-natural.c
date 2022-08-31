#include <stdio.h>
/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int sum, sum1;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
