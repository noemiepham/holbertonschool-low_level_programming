#include "main.h"
/**
* _strstr - function finds the first occurrence of the substring
* @haystack : This is the main C string to be scanned.
* @needle :This is the small string to be searched with-ini haystack string.
* Return: string
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return (haystack + i);
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
return (0);
}
