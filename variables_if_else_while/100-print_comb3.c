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
	while (n <= 9)
	{
		m = n;
		while (m < 9)
		{
			putchar(n + '0');
			putchar ((m + 1)  + '0');
			if (n != 8 && n != 9)
			{
				putchar (',');
				putchar (' ');
			}
			m++;
		}
		n++;
	}
putchar('\n');
return (0);
}
