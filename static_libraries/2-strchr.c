#include "main.h"
/**
* _strchr - chercher charater
* @s : pointer string
* @c : character
* Return: string
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
return (0);
}
