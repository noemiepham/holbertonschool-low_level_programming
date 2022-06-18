#include "main.h"
/**
* leet - 1337
* @str : string
* Return: str
*/

char *leet(char *str)
{
	int i;
	int str2[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	i = 0;
	while (str[i])
	{
		int j;

		j = 0;
		while (j <= 8)
		{
			if (str[i] == str2[j] || str[i] - 32 == str2[j])
				str[i] = j + '0';
				j++;
		}
	i++;
	}
return (str);
}
