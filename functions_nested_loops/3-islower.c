/*
* File: 3. islower
* Auth: NoémePHAM
*/

#include "main.h"

/**
* int _islower(int c) -  function that checks for lowercase character.
*/

int _islower(int c)
{
	int low;

	low = 97;
	while (low <= 122)
	{
		if (c >= 97 && c <= 122)
			return (1);
		else
			return (0);
	}
	low++;
return (0);
}
