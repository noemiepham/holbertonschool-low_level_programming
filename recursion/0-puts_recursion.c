#include "main.h"

/**
*_puts_recursion - put reursion
* @s: pointer;
*/

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
_putchar('\n');
}
