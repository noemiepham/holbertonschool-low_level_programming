#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatiner two string in new array
* @s1: string 1
* @s2: string 2
* @n : number of string
* Return: NULL if string Null
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	int l;
	unsigned int h;
	char *array = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	for (j = 0; s2[j] != '\0'; j++)
	array = (char *)malloc((i + j + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		array[l] = s1[l];
	for (h = 0; h < j; h++)
	{
		if (n >= h)
			array[l + h] = s2[h];
		else
			array[l + h] = s2[h + n];
	}
return (array);
}
