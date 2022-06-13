#include "main.h"
#include "stdio.h"
#include "unistd.h"
/*
* 9. Fizz-Buzz
* Auth: NoémePHAM
*/

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3) == 0)
		printf("Fizz");
		else if ((n % 5) == 0)
		printf("Buzz");
		else if (n % 15 == 0)
		printf("FizzBuzz");
		else
			printf("%d", n);
		if (n < 100)
			putchar(' ');
	n++;
	}
putchar('\n');
return (0);
}
