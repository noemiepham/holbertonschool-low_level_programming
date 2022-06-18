#include "main.h"
/**
* _strspn - returns the length
* @s : string to be scanned
* @accept :string containing the characters to match
* Return: number of characters
*/

unsigned int _strspn(char *s, char *accept)
{
		int i;
		int bytes = 0;

	while (*accept)
	{
		for (i = 0; s[i]; i++)
		{
			if (*accept ==  s[i])
			{
				bytes++;
				break;
			}
		}
	accept++;
	}
	return (bytes + 1);
}
