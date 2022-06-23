#include "main.h"
#include <stdlib.h>
/**
* char *_strdup - string copy;
* @str : string
* Return: Null if malloc is Null
*/

char *_strdup(char *str)
{
	int i, len;
	char *dest = NULL;

	len = 0;
	if (str != NULL)
	{
		while (str[len])
		{
			len++;
		}
		dest = (char *)malloc(sizeof(*str) * (len + 1));
		if (dest == NULL)
			return (NULL);
		i = 0;
		while (i < len)
		{
			dest[i] = str[i];
		i++;
		}
	}
return (dest);
}
