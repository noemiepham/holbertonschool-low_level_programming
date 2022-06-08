#include "main.h"
#include "stdio.h"
/*
* File: 8. Hour of my life
* Auth: NoémePHAM
*/

/**
 * jack_bauer - Prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;

	h1 = 0;
	while (h1 < 3)
	{
		h2 = 0;
		while (h2 <= 9)
		{
			if (h1 == 2 && h2 < 4)
			{
				m1 = 0;
				while (m1 < 6)
				{
					m2 = 0;
					while (m2 <= 9)
					{
						_putchar(h1 + '0');
						_putchar(h2 + '0');
						_putchar(':');
						_putchar(m1 + '0');
						_putchar(m2 + '0');
						_putchar('\n');
					m2++;
					};
				m1++;
				}
			}
		h2++;
		}
	h1++;
	}
}
