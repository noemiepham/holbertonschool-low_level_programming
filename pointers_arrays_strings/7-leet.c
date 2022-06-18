#include "main.h"
/**
* leet - 1337
* @str : string
* Return: str
*/

char *leet(char *str)
{
	int i;
	int j;
	int leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	i = 0;
	while (str[i])
	{
		j = 0;
		while (j <= 8)
		{
			if (str[i] == leet[j] ||
str[i] - 32 == leet[j])
				str[i] = j + '0';
				j++;
		}
	i++;
	}
return (str);
}
