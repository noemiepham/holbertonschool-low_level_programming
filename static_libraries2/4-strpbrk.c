#include "main.h"
/**
* _strpbrk - function locates the first occurrence in the string s
* @s : This is the C string to be scanned.
* @accept : This is the C string containing the characters to match.
* Return: string ou null
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	s++;
	}
return (0);
}
