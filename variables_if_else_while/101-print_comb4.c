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
	int l;

	n = 0;
	while (n <= 9)
	{
		m = n;
		while (m < 9)
		{
			l = m;
			while (l < 8)
			{
				putchar(n + '0');
				putchar((m + 1) + '0');
				putchar((l + 2) + '0');
				if (n != 7 && n != 8 && l != 9)
				{
					putchar (',');
					putchar (' ');
				}
			l++;
			}
		m++;
		}
	n++;
	}
putchar('\n');
return (0);
}
