/*
* 5. A good engineer thinks in reverse..
* Auth: NoémePHAM
*/

#include "main.h"

/**
*_strlen - length of string
* @s: pointer
* Return: _strlen
*/
int _strlen(char *s)
{
	int strlen;

	strlen = 0;
	while (s[strlen] != '\0')
	{
		strlen++;
	}
return (strlen);
}

/**
*rev_string - reverse string
*@s : string
*/

void rev_string(char *s)
{
	int i;
	int l;
	int r;

	l = _strlen(s);
	r = l - 1;
	i = 0;
	while (i < r)
	{
		int temp;

		temp = s[i];
		s[i] = s[r];
		s[r] = temp;
	r--;
	}
}

