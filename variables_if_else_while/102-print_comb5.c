#include <stdio.h>
#include <unistd.h>

/**
* main - funtion return 0
*
* Return: Always 0 (Sucess)
*/

int main(void)
{
	int n;
	int m;

	n = 0;
	while (n < 99)
	{
		m = n + 1;
		while (m <= 99)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			if (n != 98 && n != 99)
			{
				putchar(',');
				putchar(' ');
			}
		m++;
		}
	n++;
	}
putchar('\n');
return (0);
}
