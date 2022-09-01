#include "main.h"
/**
 * rot13 - encode a string into rot13
 * @s: string
 * Return: address of s
 */
char *rot13(char *s)
{
	int i, j;
	char array1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char array2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (array1[j] == *(s + i))
			{
				*(s + i) = array2[j];
				break;
			}
		}
	}
	return (s);
}
