#include "main.h"
#include <stdlib.h>
/**
* char *str_concat - concatiner two string;
* @s1 : Dest string
* @s2 : Src string
* Return: Null if malloc is Null
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *string = NULL;
	int m;
	unsigned int n;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	string = (char *)malloc(sizeof(char) * (i + j + 1));
	if (string == NULL)
		return (NULL);
	for (n = 0; s1[n] != '\0'; n++)
		string[n] = s1[n];
	for (m = 0; s2[m] != '\0'; n++)
	{
		string[n] = s2[m];
		m++;
	}
	return (string);
}
